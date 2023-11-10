#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct format - Format structure
 * @type: The format specifier
 * @f: The function associated with the format specifier
 */
typedef struct format
{
	char type;
	void (*f)(va_list);
} format_t;

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

