#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size of square
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int diagSum1 = 0, diagSum2 = 0;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			if (i == j)
			{
				diagSum1 += *a;
			}

			if ((i + j) == (size - 1))
			{
				diagSum2 += *a;
			}
		}
	}

	printf("%i", diagSum1);
	printf("%i", diagSum2);
	printf("\n");
}
