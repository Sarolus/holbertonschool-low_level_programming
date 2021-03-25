#include "holberton.h"

/**
 * count - function to count (OBVIOUSLY)
 * @n: number
 * Return: return the count.
 */
int count(unsigned long int n)
{
	if (n <= 0)
	{
		return (0);
	}
	if (n & 1)
	{
		return (count(n >> 1) + 1);
	}
	else
	{
		return (count(n >> 1));
	}
}

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: comparative number
 * Return: return -1 if error, otherwise the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c;

	c = n ^ m;

	return (count(c));
}
