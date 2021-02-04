#include <stdio.h>

/**
 * main - Give the alphabet reverted
 * Return: always return 0
 */

int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
