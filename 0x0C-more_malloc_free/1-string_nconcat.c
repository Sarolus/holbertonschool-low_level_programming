#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - Concatenate two strings with a size n.
 * @s1: First string
 * @s2: Second string
 * @n: specified size
 * Return: return the dup (the two strings concatenates)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *dup;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	else
	{
		s1 = "";
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	else
	{
		s2 = "";
	}

	if (n >= len2)
	{
		n = len2;
	}

	dup = malloc((len1 + n + 1) * sizeof(char));

	if (!dup)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		dup[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		dup[i + len1] = s2[i];
	}
	dup[len1 + n] = '\0';

	return (dup);
}
