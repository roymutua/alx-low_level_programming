#include "functions_pointers.h"
/**
 * int_index - searches for an integer
 * @cmp: pointer to the function that compares
 * @size: size of the array
 * @array: array of elements
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-i);
}
