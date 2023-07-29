#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"
/**
 * _printf - the function
 * @format: character
 * @...: arguments
 */
int _printf(const char *format, ...)
{
	va_list ar;
	int cha = 0;
	int i, j;

	if (format == NULL)
	{
		fputs("(null)", stdout);
		return (6);
	}

	va_start(ar, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				putchar(va_arg(ar, int));
				cha++;
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(ar, char *);
				if (str == NULL)
				{
					fputs("(null)", stdout);
					cha+= 6;
				}
				else
				{

				for (j = 0; str[j] != '\0'; j++)
				{
					putchar(str[j]);
					cha++;
				}
				}
			}
			else if (format[i] == '%')
			{
				putchar('%');
				cha++;
			}
		}
		else
		{
			putchar(format[i]);
			cha++;
		}
	}
	va_end(ar);
	return (cha);
}
