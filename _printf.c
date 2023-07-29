#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"
/**
 * _printf - the function
 * @format: character
 * @...: arguments
 * Return: cha
 */
int _printf(const char *format, ...)
{
	va_list ar;
	int cha = 0;
	int i = 0;

		va_start(ar, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			if (format[i] == '%')
			{
				putchar('%');
				cha++;
			}
			else if (format[i] == 'c')
			{
				cha += _printf_charac(ar);
			}
			else if (format[i] == 's')
			{
				cha += _printf_cad(ar);
			}
			else
			{
				putchar(format[i]);
				cha++;
			}
			i++;
		}
	}
	va_end(ar);
	return (cha);
}
