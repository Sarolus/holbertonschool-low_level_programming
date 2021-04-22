#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the even-valued terms that do not exceed 4.000.000
 * Return: return 0 on success.
 */
int main(void)
{
	int i = 0;
	int res = 0, even = 0, n1 = 0, n2 = 1;

	while (i < 32)
	{
		res = n1 + n2;
		if (res % 2 == 0)
		{
			even += res;
		}
		n1 = n2;
		n2 = res;
		i++;
	}
	printf("%i\n", even);

	return (0);
}
