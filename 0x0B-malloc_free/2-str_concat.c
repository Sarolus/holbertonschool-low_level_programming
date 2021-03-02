#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: First string
 * @s2: Second string
 * Return: return the dup (the two strings concatenates)
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *dup;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	dup = malloc((len1 + len2 + 1) * sizeof(char));

	if (!dup)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		dup[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		dup[i + len1] = s2[i];
	}
	dup[len1 + len2] = '\0';

	return (dup);
}
