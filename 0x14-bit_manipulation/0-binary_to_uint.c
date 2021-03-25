#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars.
 * Return: return the converted number, otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int i, j;
	unsigned int power = 1;
	unsigned int result = 0;
	int base;

	base = 2;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return ((b[0] - 48));
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		for (j = len - 1; j > 0; j--)
		{
			power = power * base;
		}
		result += power * (b[i] - 48);
		len--;
		power = 1;
	}
	return (result);
}
