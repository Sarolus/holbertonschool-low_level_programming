#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: Our specified grid
 * @height: Height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
