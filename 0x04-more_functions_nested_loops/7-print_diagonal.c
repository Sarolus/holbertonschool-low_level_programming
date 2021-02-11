#include "holberton.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: number of times the character is printed
 */

void print_diagonal(int n)
{
	int loop;

	if (n > 0)
	{
		for (loop = 0; loop < n ; loop++)
		{
			_putchar(92);
			_putchar('\n');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
