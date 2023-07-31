#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - is a function
 * @format: is a format
 * @...: is a arguments
 * Return: cha
 */
int _printf(const char *format, ...)
{
	va_list ar;
	int cha = 0, num;

	va_start(ar, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						char c = va_arg(ar, int);
						cha += write(1, &c, 1);
						break;
					}
				case 's':
					{
						char *str = va_arg(ar, char *);
						int len = strlen(str);                                                                                                                                                                
						if (str == NULL)
							return (0);
						cha = write(1, str, len);
						/*return (cha);*/
					 
						/*char *str = va_arg(ar, char *);
						cha += write(1, str, sizeof(char *));*/
						break;
					}
				case '%':
					{
						char c = '%';
						cha += write(1, &c, 1);
						break;
					}
				default:
					{
						num = va_arg(ar, int);
						cha += write(1, &num, sizeof(int));
						break;
					}
			
			
			}
		}
		else
		{
			cha += write(1, format, 1);
		}
		format++;
	}
	va_end(ar);
	return (cha);
}
