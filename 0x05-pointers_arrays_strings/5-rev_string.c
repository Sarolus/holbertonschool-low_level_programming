#include "holberton.h"

/**
 * rev_string - Reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	char temp;
	int begin, end, length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (begin = 0, end = length - 1; begin < end; begin++, --end)
	{
		temp = s[end];
		s[end] = s[begin];
		s[begin] = temp;
	}
}
