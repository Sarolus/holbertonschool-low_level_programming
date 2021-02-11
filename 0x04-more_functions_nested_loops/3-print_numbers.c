#include "holberton.h"

/**
 * print_numbers - Print numbers from 0 to 9
 * Return: return 0
 */

void print_numbers(void)
{
	int nb;

	for (nb = 0; nb <= 9; nb++)
	{
		_putchar(nb);
	}

	_putchar('\n');
	return;
}
