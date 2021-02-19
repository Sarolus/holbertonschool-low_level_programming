#include "holberton.h"

/**
 * _strcmp - Compare two strings
 * @s1 : source string
 * @s2 : source string
 * Return: return 1 if different, 0 if similar
 */

int _strcmp(char *s1, char *s2)
{
	int length;

	for (length = 0; s1[length] != '\0'; length++)
	{
		if (s1[length] != s2[length])
		{
			return (s1[length] - s2[length]);
		}
	}

	return (0);
}
