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
	while (s && s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * str_concat - Concatenate two strings.
 * @s1: First string
 * @s2: Second string
 * Return: return the dup (the two strings concatenates)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *dup;

	if (s1 != NULL)
	{
		len1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = _strlen(s2);
	}

	dup = malloc((len1 + len2 + 1) * sizeof(char));

	if (!dup)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		dup[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		dup[i + j] = s2[j];
	}

	return (dup);
}
