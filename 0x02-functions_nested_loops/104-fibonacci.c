#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: return 0 on success.
 */
int main(void)
{
	int i = 0;
	unsigned long int res, n1 = 1, n2 = 2;

	while (i < 98)
	{
		if (i == 0)
		{
			printf("%lu", n1);
		}
		else
		{
			printf(", %lu", n1);
		}
		res = n1 + n2;
		n1 = n2;
		n2 = res;
		i++;
	}
	putchar('\n');

	return (0);
}
