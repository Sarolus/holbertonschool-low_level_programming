#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid, lin, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (lin = 0; lin < height; lin++)
	{
		grid[lin] = malloc(width * sizeof(int));

		if (grid[lin] == NULL)
		{
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			grid[col] = malloc(height * sizeof(int));

			if (grid[col] == NULL)
			{
				return (NULL);
			}
		}
	}

	return (grid);
}
