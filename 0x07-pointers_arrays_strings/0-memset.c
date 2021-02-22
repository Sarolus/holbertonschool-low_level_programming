#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area
 * @b: Constant byte
 * @n: First n bytes
 * Return: return a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
