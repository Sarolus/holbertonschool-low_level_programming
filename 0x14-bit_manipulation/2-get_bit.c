#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: number.
 * @index: specified index.
 * Return: return the value of the bit at index, or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	while (i < index)
	{
		n = n >> 1;
		i++;
	}

	return ((n & 1));
}
