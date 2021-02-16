#include "holberton.h"

/**
 * _puts - Print a string
 * @str: String
 */

void _puts(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
