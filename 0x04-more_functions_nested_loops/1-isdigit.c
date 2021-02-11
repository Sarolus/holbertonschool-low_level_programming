#include "holberton.h"

/**
 * _isdigit - Checks digits
 * @c: digit
 * Return: Return 1 if between 0 & 9 otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}

	return (0);
}
