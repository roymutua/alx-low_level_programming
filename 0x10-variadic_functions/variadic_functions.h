#ifndef variadic_function_h
#define variadic_function_h
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @a: print type
 * @b: print function
 */
typedef struct print
{
	char *a;
	void (*b)(va_list);
}print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
