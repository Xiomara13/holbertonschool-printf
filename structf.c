#include <stdio.h>
#include "main.h"
/**
 * structf- the function
 * @ar: character
 * Return: NULL
 */
int (*structf(char pf))(va_list)
{
	int i = 0;
	pf_t func[] = {
		{"c", _printf_charac},
		{"s", _printf_cad},
		{"%", pf_porcen},
		{"d", pf_integer},
		{"i", pf_integer},
		{NULL, NULL}
	};
	while (func[i].pf != NULL)
	{
		if (*func[i].pf == pf)
			return (func[i].f);
		i++;
	}
	return (NULL);
}

