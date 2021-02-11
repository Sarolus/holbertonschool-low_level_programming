#include "holberton.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		if (nb != '2' && nb != '4')
		{
			_putchar(nb);
		}
	}

	_putchar('\n');
}
