#include "holberton.h"

/**
 * print_alphabet - Print the alphabet in order
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
