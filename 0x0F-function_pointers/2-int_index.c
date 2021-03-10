#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array
 * @size: size of our array
 * @cmp: function pointer
 * Return: return first element of our index if match, -1 if not,
 * and -1 if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		while (i < size)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}

	return (-1);
}
