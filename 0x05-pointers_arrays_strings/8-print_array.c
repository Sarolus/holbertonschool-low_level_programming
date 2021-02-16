#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Print specific elements of an array
 * @a: array
 * @n: array element
 */

void print_array(int *a, int n)
{
	int length;

	for (length = 0; length < n; length++)
	{
		if (length != 0)
		{
			printf(", %d", a[length]);
		}
		else
		{
			printf("%d", a[length]);
		}
	}
	printf("\n");
}
