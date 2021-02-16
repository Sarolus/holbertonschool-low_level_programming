#include "holberton.h"

/**
 * _strlen - Returns lenght of a string.
 * @s: string
 * Return: Return result
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	;

	return (length);
}
