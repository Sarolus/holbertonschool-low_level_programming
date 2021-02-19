#include "holberton.h"

/**
 * _strncpy - Copy a string with specified size.
 * @src: source string
 * @dest: destination string
 * @limit: maximum size to append.
 * Return: Return result
 */

char *_strncpy(char *dest, char *src, int limit)
{
	int length;

	for (length = 0; src[length] != '\0' && length < limit; length++)
	{
		dest[length] = src[length];
	}
	while (length < limit)
	{
		dest[length] = '\0';
		length++;
	}

	return (dest);
}
