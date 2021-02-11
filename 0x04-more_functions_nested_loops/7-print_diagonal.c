#include "holberton.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: number of times the character is printed
 */

void print_diagonal(int n)
{
	int loop1;
	int loop2;

	if (n > 0)
	{
		for (loop1 = 0; loop1 < n ; loop1++)
		{
			for (loop2 = 0; loop2 < n; loop2++)
			{
				if (loop2 == loop1)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}

}
