#include "holberton.h"

/**
 *
 *
 */

int _abs(int prmNumber)
{
	int result = prmNumber;

	if (prmNumber < 0)
	result = prmNumber * -1;

	return (result);
}
