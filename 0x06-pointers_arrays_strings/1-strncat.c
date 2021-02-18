#include "holberton.h"

/**
 * _strlen - Return the length of a string
 * @src: source string
 * Return: return length
 */

int _strlen(char *src)
{
	int length;

	for (length = 0; src[length] != '\0'; length++)
	;

	return (length);
}

/**
 * _strncat - Concatenates two strings up to specified size.
 * @src: source string
 * @dest: destination string
 * @size: maximum size to append
 * Return: return to destination
 */

char *_strncat(char *dest, char *src, int size)
{
	char *end = dest + _strlen(dest);

	while (size--)
	{
		if (!(*end++ = *src++))
		{
			return (dest);
		}
	}

	*end = '\0';

	return (dest);
}
