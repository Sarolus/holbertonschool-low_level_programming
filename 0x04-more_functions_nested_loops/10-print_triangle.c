#include "holberton.h"

/**
 * print_triangle - Print a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int loop1;
	int loop2;
	int size2;

	size2 = size - 1;

	if (size > 0)
	{
		for (loop1 = 0; loop1 < size; loop1++)
		{
			for (loop2 = 0; loop2 < size; loop2++)
			{
				if ((loop1 + loop2) >= size2)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
