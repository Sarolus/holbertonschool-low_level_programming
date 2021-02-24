#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: given number
 * Return: return 1 if 0, -1 if less than 0 or factorial number.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
