#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"
/**
 * _printf_charac -is a functons
 * @ar: arguments
 * Return: putchar
 */
int _printf_charac(va_list ar)
{
	char c = va_arg(ar, int);

	return (putchar(c));
}
/**
 * _printf_cad - is a function
 * @ar: arguments
 * Return: fputs
 */
int _printf_cad(va_list ar)
{
	char *str = va_arg(ar, char *);

	if (str == NULL)
	{
		return (fputs("(null)", stdout));
	}
	else
	{
		return (fputs(str, stdout));
	}
}
/**
 * pf_porcen - is a function
 * @ar: arguments
 * Return: putchar
 */
int pf_porcen(va_list ar)
{
	(void)ar;
	return (putchar('%'));
}
/**
 * pf_integer - is a function
 * @ar: arguments
 * Return: count
 */
int pf_integer(va_list ar)
{
	int num = va_arg(ar, int);
	int count = 0;
	int temp = num;
	int num_digits = 1;
	int divi = 1;
	int i;

	while (temp / 10 > 0)
	{
		num_digits++;
		temp /= 10;
	}
	for (i = 1; i < num_digits; i++)
		divi *= 10;

	while (divi > 0)
	{
		int digit = num / divi;

		count *= putchar(digit + '0');
		num -= digit * divi;
		divi /= 10;
	}
	return (count);
}
