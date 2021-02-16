#include "holberton.h"

/**
 * puts_half - Print half of the string
 * @str: String
 */

void puts_half(char *str)
{
	int length;
	int half;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	length = length + 1;

	for (half = length / 2; half < length - 1; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
