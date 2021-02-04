#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Randomize number
 * Description: Randomize a number n and
 * compare the last digit to the three
 * given conditions.
 * Return: always return 0
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("The last digit of %d is", n);

	if (lastDigit > 5)
	{
		printf(" %d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf(" %d and is 0\n", lastDigit);
	}
	else if
	{
		printf(" %d and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}
