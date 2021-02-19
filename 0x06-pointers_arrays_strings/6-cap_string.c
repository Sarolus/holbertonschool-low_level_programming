#include "holberton.h"

/**
 * _strlen - Return the length of a string
 * @src: source string
 * Return: return length
 */

int _strlen(char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _isalpha - checks alphabetic character
 * @c: character
 * Return: return 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: string
 * Return: return the changed string
 */

char *cap_string(char *str)
{
	int index;
	int length = _strlen(str);

	for (index = 0; index < length; index++)
	{
		if (_isalpha(str[0] == 1))
		{
			str[0] -= 32;
		}
		if (_isalpha(str[index]))
		{
			if (str[index - 1] >= 0 && str[index - 1] <= 44 && str[index - 1] != '!')
			{
				str[index] -= 32;
			}
			else if (str[index - 1] == 46)
			{
				str[index] -= 32;
			}
			else if (str[index - 1] >= 58 && str[index - 1] <= 64)
			{
				str[index] -= 32;
			}
			else if (str[index - 1] >= 123 && str[index - 1] <= 126)
			{
				str[index] -= 32;
			}
		}
	}

	return (str);
}
