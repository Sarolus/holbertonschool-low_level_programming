#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as parameter on each
 * element of an array.
 * @array: array.
 * @size: size of our array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
