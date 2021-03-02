#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid, li, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (li = 0; li < height; li++)
	{
		grid[li] = malloc(width * sizeof(int));

		if (grid[li] == NULL)
		{
			free(grid[line]);
			free(grid);
			return (NULL);
		}
	}

	for (col = 0; col < width; col++)
	{
		for (li = 0; li < heigth; li++)
		{
			grid[li][col] = 0;
		}
	}

	return (grid);
}
