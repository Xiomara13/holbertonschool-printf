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

	va_start(ar, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					cha += _printf_charac(ar);
					break;
				case 's':
					cha += _printf_cad(ar);
					break;
				case '%':
					cha += pf_porcen(ar);
					break;
				default:
					cha += pf_integer(ar);
					break;
			}
		}
		else
		{
			cha += putchar(*format);
		}
		format++;
	}
	va_end(ar);
	return (cha);
}
