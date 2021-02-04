#include <stdio.h>

/**
 * main - Print all numbers of base 16
 * Return: always return 0
 */

int main(void)
{
	char digit;
	char letter;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
