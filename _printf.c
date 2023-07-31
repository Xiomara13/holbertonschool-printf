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
	int cha = 0;
	int num_ch;

	va_start(ar, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				cha += putchar('%');
			else
			{
				num_ch = structf(*format)(ar);
				if (num_ch == -1)
				{
					cha = -1;
					break;
				}
				cha += num_ch;
			}
		}
		else
		{
			putchar(*format);
			cha++;
		}
		format++;
	}
	va_end(ar);
	return (cha);
}
