#include <stdio.h>

/**
 * main - print size of various type
 * Return: After printing values, return 0
 */

int main(void)
{
	printf("Size of a char: %c\n", sizeof(char));
	printf("Size of an int: %i\n", sizeof(int));
	printf("Size of a long int: %li\n", sizeof(long int));
	printf("Size of a long long int: %lli\n", sizeof(long long int));
	printf("Size of a float: %f\n", sizeof(float));

	return (0);
}
