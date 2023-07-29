#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 *  * struct pf - struct pf
 *   * @pf: the operator
 *    * @: the function associated
 *     */
typedef struct pf
{
	char *pf;
	int (*f)(va_list);
}
pf_t;
int _printf(const char *format, ...);
int _printf_charac(va_list ar);
int _printf_cad(va_list ar);
#endif /*MAIN_H*/
