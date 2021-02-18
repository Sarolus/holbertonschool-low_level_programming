#include "holberton.h"

/**
 * _strlen - Return the length of a string
 * @src: source string
 * Return: return length
 */

int _strlen(char *src)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	;

	return (length);
}

/**
 * _strcpy - Copy a string to a pointed buffer
 * @src: source string
 * @dest: destination string
 * Return: return to destination
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

/**
 * _strcat - Concatenate two strings
 * @src: source string
 * @dest: destination string
 * Return: return to destination
 */

char *_strcat(char *dest, char *src)
{
	_strcpy(dest + _strlen(dest), src);

	return (dest);
}
