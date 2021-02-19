#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 * @str: string
 * Return: return changed string
 */

char *leet(char *str)
{
	int index1, index2;
	char *letters = "aAeEoOtTlL";
	char *l33t = "4433007711";

	for (index1 = 0; str[index1] != '\0'; index1++)
	{
		for (index2 = 0; letters[index2] != '\0'; index2++)
		{
			if (str[index1] == letters[index2])
			{
				str[index1] = l33t[index2];
			}
		}
	}

	return (str);
}
