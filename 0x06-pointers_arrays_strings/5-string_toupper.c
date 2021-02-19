#include "holberton.h"

/**
 * string_toupper - Changes all lowercase of a string to uppercase
 * @str: source string
 * Return: return the string
 */

char *string_toupper(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (str[length] >= 97 && str[length] <= 122)
		{
			str[length] -= 32;
		}
	}

	return (str);
}
