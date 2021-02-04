#include <stdio.h>

/**
 * main - Print single-digit numbers
 * Description : hund = hundred, tens = tens, unit = unity,
 * here we want to prints all possible different combinations
 * of three digits without using the same combination.
 * Return: always return 0
 */

int main(void)
{
	int hund, tens, unit, number;

	for (number = 0; number <= 999; number++)
	{
		hund = number / 100;
		tens = number / 10 % 10;
		unit = number % 10;

		if (hund < tens)
		{
			if (hund < unit)
			{
				if (tens < unit)
				{
					putchar(hund + 48);
					putchar(tens + 48);
					putchar(unity + 48);

					if (hund * 100 + tens * 10 + unity != 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);
}
