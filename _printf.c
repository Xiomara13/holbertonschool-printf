#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list ar;
	va_start(ar, format);
	int cha = 0;
	int i, c, j;
    
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
	i++;
	if (format[i] == 'c')
	{
	c = va_arg(ar, int);
	putchar(c);
	cha++;
	}
	else if (format[i] == 's')
            {
                char *str = va_arg(ar, char *);
                for (j = 0; str[j] != '\0'; j++)
                {
                    putchar(str[j]);
                    cha++;
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
    return cha;
}
