#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: first integer number.
 * @max: last integer number.
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int b, c;
	int *a;

	if (min > max)
		return (NULL);
	c = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < c; b++, min++)
	{
		a[b] = min;
	}
	return (a);
}
