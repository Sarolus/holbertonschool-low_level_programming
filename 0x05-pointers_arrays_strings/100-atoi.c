#include "holberton.h"

/**
 * _atoi - Convert a string to an integer
 * @str: string
 * Return: return the result
 */

int _atoi(char *str)
{
	int result = 0;
	int symbol = 1;
	int length = 0;

	if (str[length] == '-')
	{
		symbol *= -1;
		length++;
	}

	for (length; str[length] != '\0'; length++)
	{
		if (str[length] >= '0' && str[length] <= '9')
		{
			result = ((result * 10) + (str[length] - '0'));
		}
		else if (result > 0)
		{
			break;
		}
	}
	result *= symbol;

	return (result);
}
