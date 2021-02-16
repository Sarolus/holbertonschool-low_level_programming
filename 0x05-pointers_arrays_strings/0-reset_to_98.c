#include "holberton.h"

/**
 * reset_to_98 - Reset int value to 98
 * @n: value
 */

void reset_to_98(int *n)
{
	int *p = *&n;

	*p = 98;
}
