#include <stdio.h>

/**
 * main - Print single-digit numbers
 * Description : tens = tens, unit = unity, here we want to
 * print all possible different combinations of two digits.
 * Return: always return 0
 */

int main(void)
{
	int tens, unit, number;

	for (number = 0; number <= 99; number++)
	{
		tens = number / 10;
		unit = number % 10;

		if (tens < unit)
		{
			putchar(tens + 48);
			putchar(unit + 48);

			if (tens * 10 + unit != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
