#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @prmN: Parameter number
 * Return: Return result
 */

int print_last_digit(int prmN)
{
	int result;

	result = prmN % 10;
	if (result < 0)
	{
		result = result * -1
	}

	_putchar(result + '0');

	return (result);
}
