#include "holberton.h"

/**
 * puts2 - Print every other character of a string
 * @str: String
 */

void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
