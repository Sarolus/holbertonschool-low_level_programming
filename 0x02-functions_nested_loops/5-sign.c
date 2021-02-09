#include "holberton.h"

/**
 * print_sign - Prints sign of a number
 * @n: number
 * Return: Return 1 if positive, -1 if less than zero and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
