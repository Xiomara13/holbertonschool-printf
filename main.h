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
#endif /*MAIN_H*/
