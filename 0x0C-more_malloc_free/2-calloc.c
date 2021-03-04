#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: Array
 * @size: number of elements
 * Return: return ptr, otherwise NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
        char *ptr;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
