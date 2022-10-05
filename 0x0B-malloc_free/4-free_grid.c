#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * height: height of the grid.
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == '\0' || height <= 0)
	{
		return;
	}

	for (a = height - 1; a >= 0 ; a--)
	{
		free(grid[a]);
	}
	free(grid);
}
