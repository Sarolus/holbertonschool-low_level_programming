#include <stdio.h>

/**
 * main - insert
 * Return: always return 0
 */

int main(void)
{
	int f_tens, f_unit, s_tens, s_unit, firstNumber, secondNumber;
	{
		for (firstNumber = 0; firstNumber <= 99; firstNumber++)
		{
			f_tens = firstNumber / 10;
			f_unit = firstNumber % 10;

			for (secondNumber = 0; secondNumber <= 99; secondNumber++)
			{
				s_tens = secondNumber / 10;
				s_unit = secondNumber % 10;

				if (firstNumber < secondNumber)
				{
					putchar(f_tens + '0');
					putchar(f_unit + '0');
					putchar(' ');
					putchar(s_tens + '0');
					putchar(s_unit + '0');

					if (firstNumber < 98 || secondNumber < 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
