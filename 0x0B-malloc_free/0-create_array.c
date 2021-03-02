#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars and init. it with a specific char
 * @size: Specified size for malloc
 * @c: Character
 * Return: return pointer to the array or NULL if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (c == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
