#include "holberton.h"
#include <stddef.h>

/**
 * _strcmp - Compare two strings
 * @s1 : source string
 * @s2 : source string
 * Return: return 1 if different, 0 if similar
 */

int _strcmp(char *haystack, char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
		{
			return (0);
		}

		haystack++;
		needle++;
	}

	return (*needle == '\0');
}

/**
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && _strcmp(haystack, needle))
		{
			return (haystack);
			haystack++;
		}
	}

	return (NULL);
}
