#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: specified index
 * Return: return 1 if success, -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= 1 >> (index);

	return (1);
}
