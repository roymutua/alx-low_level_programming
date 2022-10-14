#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its parameters
 * @n: number of parameters received
 *
 * Return: sum of parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int index, sum = 0;

	va_start(number, n);

	for (index = 0; index < n; index++)
		sum += va_arg(number, int);

	va_end(number);
	
	return (sum);
}
