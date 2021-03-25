#include "holberton.h"

/**
 * print_binary_recursiv - recursive function for the n > 0 conversion
 * @n: number
 */
void print_binary_recursiv(unsigned long int n)
{
	if (n != 0)
	{

		print_binary_recursiv((n >> 1));

		if ((n & 1) == 1)
		{
			_putchar('1');
		}

		if ((n & 1) == 0)
		{
			_putchar('0');
		}
	}
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_binary_recursiv(n);
	}
}
