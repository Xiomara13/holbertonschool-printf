#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"
/**
 * _printf_charac - receives an argument and prints an integer
 * @va_list: is a struct
 * @ar: arguments
 * Return: 1
 */
int _printf_charac(va_list ar)
{
	char c = va_arg(ar,int);
		putchar(c);
		return (1);
}
/**
 * _print_cad - receives an argument and receive string
 * @va_list: is a struct
 * @ar: arguments
 * return: j
 */
int _printf_cad(va_list ar)
{
	char *str = va_arg(ar,char *);
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
