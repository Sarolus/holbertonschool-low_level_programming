#include "holberton.h"

/**
 * _isupper - Checks for uppercase
 * @c: Character
 * Return: return 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
