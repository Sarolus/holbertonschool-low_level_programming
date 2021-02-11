#include <stdio.h>

/**
 * main - Fizzbuzzing
 * @nb: number to print
 * Return: return 0
 */

int main(int nb)
{
	for (nb = 1; nb <= 100; nb++)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (nb % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (nb % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", nb);
		}
	}
	putchar('\n');
	return (0);
}
