#include "holberton.h"

/**
 * _abs - compute absolute value
 * @prmNumber: Parameter number
 * Return: Return result
 */

int _abs(int prmNumber)
{
	int result = prmNumber;

	if (prmNumber < 0)
	result = prmNumber * -1;

	return (result);
}
