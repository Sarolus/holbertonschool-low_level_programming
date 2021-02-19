#include "holberton.h"

/**
 * rot13 - Encode a string using rot13
 * @str: string
 * Return: return the changed string
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
			i++;
		}
		if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] -= 13;
		}
	}

	return (str);
}
