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
			if (*format == '%')
			{
				putchar('%');
				cha++;
			}
			else
			{
				int (*oper_fun)(va_list) = structf(*format);

				if (oper_fun != NULL)
				{
					cha += oper_fun(ar);
				}
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
