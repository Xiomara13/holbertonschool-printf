#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"
/**
 * _printf_charac -is a functons
 * @ar: arguments
 * Return: 1 j
 */
int _printf_charac(va_list ar)
{
	char c = va_arg(ar, int);

	putchar(c);
	return (1);
}
/**
 * _printf_cad - is a function
 * @ar: arguments
 */
int _printf_cad(va_list ar)
{
	char *str = va_arg(ar, char *);

	if (str == NULL)
	{
		fputs("(null)", stdout);
		return (6);
	}
	else
	{
		int j = 0;

		while (str[j] != '\0')
		{
			putchar(str[j]);
			j++;
		}
		return (j);
	}
}
/**
 * pf_porcen - is a function
 * @ar: arguments
 */
int pf_porcen(void)
{
	putchar('%');
	return (1);
}
