#include "holberton.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 */

void more_numbers(void)
{
	int loop;
	int nb;

	for (loop = 0; loop <= 9; loop++)
	{
		for (nb = 0; nb <= 14; nb++)
		{
			if (nb >= 10)
			{
				_putchar((nb / 10) + '0');
			}

			_putchar((nb % 10) + '0');
		}

		_putchar('\n');
	}
}
