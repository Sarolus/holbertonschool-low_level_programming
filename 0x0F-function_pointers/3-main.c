#include <stdlib.h>
#include <stdio.h>

/**
 * main - check arguments
 * @argc: size of *argv[]
 * @argv: arguments
 * Return: return 0.
 */

int main(int argc, char *argv[])
{
	//int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	if (
		*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
		&& *argv[2] != '/' && *argv[2] != '%'
	) {
		printf("Error\n");
		exit (99);
	}

	if (argv[1] == 0 && argv[3] == 0)
	{
		printf("Error\n");
		exit (100);
	}

	//print error if number of argument is wrong (exit 98)
	//print error if operator wrong (exit 99)
	//print error if / & % (exit 100)
	//si +- ou ++ error (exit 99) (wrong op)

	return (0);
}
