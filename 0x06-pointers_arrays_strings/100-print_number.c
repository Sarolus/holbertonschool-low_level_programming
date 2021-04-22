#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: number passed.
 * Return: return result.
 */

void print_number(int n)
{
	unsigned int nb;

	nb = n;
	if (n < 0)
	{
		_putchar('-');
		nb = n * -1;
	}
	if (nb <= 9)
	{
		_putchar(nb + '0');
	}
	if (nb > 9)
	{
		print_number(nb / 10);
		_putchar(nb % 10 + '0');
	}
}
