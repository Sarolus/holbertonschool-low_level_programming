#include "holberton.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int time;
	int letter;

	for (time = 0; time <= 9; time++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
