#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase.
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
