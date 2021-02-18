#include "holberton.h"

/**
 * _strncpy - Copy a string with specified size.
 * @src: source string
 * @dest: destination string
 * @size: maximum size to append.
 * Return: Return result
 */

char *_strncpy(char *dest, char *src, int size)
{
	char *result = dest;

	while (*src != '\0' && size--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (result);
}
