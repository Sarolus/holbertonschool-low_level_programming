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
	int length;

	if (str[0] == '-')
	{
		symbol *= -1;
	}

	for (length = 0; str[length] != '\0'; length++)
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

	return (symbol * result);
}
