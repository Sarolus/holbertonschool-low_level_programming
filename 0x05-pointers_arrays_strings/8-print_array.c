#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Print specific elements of an array
 * @arr: array
 * @n: array element
 */

void print_array(int *arr, int n)
{
	int length;

	for (length = 0; length < n; length++)
	{
		if (length != 0)
		{
			printf(", %d", arr[length]);
		}
		else
		{
			printf("%d", arr[length]);
		}
	}
	printf("\n");
}
