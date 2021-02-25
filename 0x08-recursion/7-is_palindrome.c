#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: String
 * Return: length of the string otherwise 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

/**
 * pal_checker - Check from start to end the string
 * @s: String
 * @start: Start of the string
 * @end: End of the string
 * Return: Return 1 if the string is a palindrome or not if 0
 */

int pal_checker(char *s, int start, int end)
{
	if (start == end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}

	return (pal_checker(s, start + 1, end - 1));
}

/**
 * is_palindrome - Return if a string is a palindrome or not
 * @s: String
 * Return: return the result of the pal_checker function
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
	{
		return (1);
	}

	return (pal_checker(s, 0, len - 1));
}
