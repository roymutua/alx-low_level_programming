#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int b;
	va_list number;

	va_start(number, n);
	for (b = 0; b < n; b++)
	{
		str = va_arg(number, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (b < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(number);
}
