#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: size of argv
 * @argv: Array containing the command line arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");

	return (0);
}
