#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Base number
 * @y: Power number
 * Return: return -1 if less than 0, 1 if 0 otherwise the value
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
