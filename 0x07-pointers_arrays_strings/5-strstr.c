#include "holberton.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: return located substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	if (needle[i] == '\0')
	{
		return (haystack + i);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[0])
			{
				return (haystack + i);
			}
		}
	}

	return (NULL);
}
