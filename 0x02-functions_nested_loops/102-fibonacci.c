#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: return 0 on success.
 */
int main(void)
{
	int i = 0;
	long int res, n1 = 0, n2 = 1;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%ld", n1);
		}
		else
		{
			printf(", %ld", n1);
		}
		res = n1 + n2;
		n1 = n2;
		n2 = res;
		i++;
	}
	putchar('\n');

	return (0);
}
