#include "holberton.h"

/**
 * _memcpy - Copies memory area
 * @dest: copy destination
 * @src: source that we copy
 * @n: n byte that we copy
 * Return: return destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
