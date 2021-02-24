#include "holberton.h"

/**
 * _sqrt_wrapper - Recursively check the number and the base number
 * for natural square root.
 * @n: Number
 * @base: The base number
 * Return: return -1 if not natural square rot, n if equal to it's base
 * otherwise we return the natural square root.
 */

int _sqrt_wrapper(int n, int base)
{
	if (n * n > base)
	{
		return (-1);
	}
	if (n * n == base)
	{
		return (n);
	}

	return (_sqrt_wrapper(n + 1, base));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number
 * Return: return the result of the wrapper function
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_wrapper(1, n));
}
