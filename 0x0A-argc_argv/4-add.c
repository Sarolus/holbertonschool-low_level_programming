#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Multiply two arguments
 * @argc: size of argv
 * @argv: Array containing the command line arguments
 * Return: return 0 if no number, Error if not digits or result if addition
 */

int main(int argc, char *argv[])
{
	int result, digit;

	for (digit = 1; digit < argc; digit++)
	{
		result += atoi(argv[digit]);
	}

	if (argc == 0)
	{
		return (0);
	}
	else if (isdigit(argv[digit]))
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
