#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the even-valued terms that do not exceed 4.000.000
 * Return: return 0 on success.
 */
int main(void)
{
	int i = 0;
	long int res, even, n1 = 1, n2 = 2;

	while (i < 32)
	{
		if (i == 1)
		{
			if (n1 % 2 == 0)
			{
				even += n1;
				printf("%ld", even);
			}
		}
		else
		{
			if (n1 % 2 == 0)
			{
				even += n1;
				printf(", %ld", even);
			}
		}
		res = n1 + n2;
		n1 = n2;
		n2 = res;
		i++;
	}
	putchar('\n');

	return (0);
}
