#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: width value
 * @height: height value
 * Return: return null if failure, null if parameters are <= 0, return the
 * pointer to the dimensional array if true.
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
			for (col = 0; col <= li; col++)
			{
				free(grid[col]);
			}
			free(grid);
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			grid[li][col] = 0;
		}
	}

	return (grid);
}
