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

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 * Return: return 0 on success.
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			res += i;
		}
	}

	print_number(res);
	_putchar('\n');

	return (0);
}
