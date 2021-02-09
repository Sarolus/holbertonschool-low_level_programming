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
		for (n_column = 0; n_column <= 9; n_column++)
		{
			_putchar((n_line * n_column) + '0');
		}
	}

	return;
}
