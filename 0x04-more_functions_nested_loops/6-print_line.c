#include "holberton.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: number of times the character is printed
 */

void print_line(int n)
{
	int loop;

	if (n > 0)
	{
		for (loop = 0; loop < n ; loop++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
