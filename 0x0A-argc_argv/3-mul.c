#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two arguments
 * @argc: size of argv
 * @argv: Array containing the command line arguments
 * Return: return Error if can't multiply, otherwise 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
