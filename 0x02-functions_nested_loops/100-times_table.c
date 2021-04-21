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
 * print_times_table - print the n times table, starting with 0.
 * @n: number passed.
 */
void print_times_table(int n)
{
	int i = 0, j, res;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				res = i * j;

				if (res <= 99 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (res <= 9 && j > 0)
				{
					_putchar(' ');
				}
				if (res >= 100)
				{
					_putchar(' ');
				}
				print_number(res);
				if (j < n)
				{
					_putchar(',');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
