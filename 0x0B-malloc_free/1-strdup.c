#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - Returns lenght of a string.
 * @s: string
 * Return: Return result
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strdup - Return a pointet to a newly allocated space in memory
 * @str: Source string
 * Return: return str to a new string dup, NULL if str = NULL, and if dup = NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i;

	dup = malloc((_strlen(str) + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
