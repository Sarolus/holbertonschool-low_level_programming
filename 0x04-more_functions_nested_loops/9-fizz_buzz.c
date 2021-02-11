#include <stdio.h>

/**
 * main - Print numbers from 1 to 100 replacing multiples of five and three
 * by words.
 * @nb: number to print
 * Return: return 0
 */

int main(int nb)
{
	for (nb = 1; nb <= 100; nb++)
	{
		if (nb != 1)
		{
			putchar(' ');
		}

		if (nb % 3 == 0 && nb % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (nb % 3 == 0)
		{
			printf("Fizz");
		}
		else if (nb % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", nb);
		}
	}
	putchar('\n');
	return (0);
}
