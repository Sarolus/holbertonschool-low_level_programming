#include "holberton.h"

/**
 * times_table - prints the 9 times table
 * Return: return 0
 */

void times_table(void)
{
	int n_line, n_column;

	for (n_line = 0; n_line <= 9; n_line++)
	{
		n_column = 0;
		_putchar('0');

		for (n_column = 1; n_column <= 9; n_column++)
		{
			if ((n_line * n_column) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((n_line * n_column) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n_line * n_column) / 10 + '0');
				_putchar((n_line * n_column) % 10 + '0');
			}
		}
		_putchar('\n');
	}

}
