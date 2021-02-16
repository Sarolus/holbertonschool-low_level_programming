#include "holberton.h"

/**
 * print_rev - Print string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int length;
	int revlength;

	while (s[length] != '\0')
	{
		length++;
	}

	for (revlength = length - 1; revlength >= 0; revlength--)
	{
		_putchar(s[revlength]);
	}
	_putchar('\n');
}
