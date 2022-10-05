#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **net;

	if (width < 1 || height < 1)
		return (NULL);
	net = malloc(sizeof(int *) * height);

	if (net == NULL)
	{
		free(net);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		net[i] = malloc(sizeof(int) * width);
		if (net[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(net[i]);

			free(net);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			net[i][j] = 0;

	return (net);
}
