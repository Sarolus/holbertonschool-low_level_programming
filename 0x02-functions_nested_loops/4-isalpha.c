#include "holberton.h"

/**
 * _isalpha - checks alphabetic character
 * @c: character
 * Return: return 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
