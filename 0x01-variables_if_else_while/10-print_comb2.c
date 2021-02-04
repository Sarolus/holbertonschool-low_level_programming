#include <stdio.h>

/**
 * main - Print single-digit numbers
 * Return: always return 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 100 ; digit++)
	{
		putchar((digit / 10) + '0');
		putchar((digit % 10) + '0');
		if (digit != 99)
		{
				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
