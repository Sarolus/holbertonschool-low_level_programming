#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * realloc - reallocates a meory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}

	return (0);
}
