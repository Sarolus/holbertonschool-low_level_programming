#include "holberton.h"

/**
 * swap_int - Swap values of two integers
 * @a: First integer
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
