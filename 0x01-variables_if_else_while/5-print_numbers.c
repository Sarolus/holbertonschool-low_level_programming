#include <stdio.h>

/**
 * main - Print all digit of base 10
 * Return: always return to 0
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
