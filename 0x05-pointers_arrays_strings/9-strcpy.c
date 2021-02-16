#include "holberton.h"

/**
 * _strcpy - Copy string pointed by
 * @src: source
 * @dest: destination
 * Return: return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (result);
}
