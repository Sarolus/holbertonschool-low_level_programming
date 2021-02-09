#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @prmN: Parameter number
 * Return: Return result
 */

int print_last_digit(int prmN)
{
	int result;
	{
		result = prmN % 10;
		if (prmN < 0)
		{
			result = prmN * -1;
		}
	}

	return (result);
}
