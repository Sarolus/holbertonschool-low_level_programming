#include <stdio.h>

/**
 * main - Print single-digit numbers
 * Return: always return 0
 */

int main(void)
{
	char digit;
	char space;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
