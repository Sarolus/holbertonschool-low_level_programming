#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: return the pointer to the array otherwise NULL.
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
