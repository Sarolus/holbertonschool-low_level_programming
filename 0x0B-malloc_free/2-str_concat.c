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
	int i, j;
	char *dup;

	dup = malloc((_strlen(s1) + (_strlen(s2) + 1)) * sizeof(char));

	if (!dup)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		dup[i] = s1[i];
	}
	while (i < s1 + s2)
	{
		dup[i] = s2[j];
		i++;
		j++;
	}
	dup[i] = '\0';

	return (dup);
}
