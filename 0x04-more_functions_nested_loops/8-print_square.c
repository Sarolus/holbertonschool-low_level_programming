#include "holberton.h"

/**
 * print_square - Print a square
 * @size: Size of the square
 */

void print_square(int size)
{
	int loop1;
	int loop2;

	if (size > 0)
	{
		for (loop1 = 0; loop1 < size; loop1++)
		{
			for (loop2 = 0; loop2 < size; loop2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
