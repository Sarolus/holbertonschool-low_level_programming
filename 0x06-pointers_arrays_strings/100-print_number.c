#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: number
 */

void print_number(int n)
{
	int power;

	power = 1;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	while (n / power > 9)
	{
		power = power * 10;
	}

	while (n > 9)
	{
		_putchar((n / power) + '0');
		n = n % power;
		power = power / 10;
	}
	_putchar(n + '0');
}
