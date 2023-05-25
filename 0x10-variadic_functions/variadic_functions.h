#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct printer - A new struct type defining a printer
 * @symbol: asymbol representing a data type
 * @print: a function pointer to a function that prints a data type
 * corresponding to symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

void print_all(const char * const format, ...);

#endif /* VARAIADIC_FUNCTIONS */
