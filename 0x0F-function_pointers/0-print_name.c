#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: String to print
 * @f: Pointer to function
 *
 * Return: function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
