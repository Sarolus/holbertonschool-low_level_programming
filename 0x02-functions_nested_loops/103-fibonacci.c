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
		if (n1 % 2 == 0)
		{
			even += n1;
		}
		res = n1 + n2;
		n1 = n2;
		n2 = res;
		i++;
	}
	printf("%ld\n", even);

	return (0);
}
