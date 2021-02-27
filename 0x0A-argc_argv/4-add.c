#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumber - Check if number or not
 * @n: Number that we check
 * Return: return 1 if number, otherwise 0
 */

int isnumber(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (isdigit(n[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (1);
}

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
		if (isnumber(argv[digit]))
		{
			result += atoi(argv[digit]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	if (argc == 0)
	{
		return (0);
	}

	printf("%d\n", result);

	return (0);
}
