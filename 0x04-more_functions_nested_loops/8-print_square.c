#include "holberton.h"

/**
 * print_square - Print a square
 * @size: Size of the square
 */

void print_square(int size)
{
	int loop1;
	int loop2;

	for (loop1 = 0; loop1 < size; loop1++)
	{
		_putchar('\n');
		for (loop2 = 0; loop2 < size; loop2++)
		{
			_putchar('#');
		}
	}

	_putchar('\n');
}
