#include <stdio.h>

/**
 * main - Prints all received arguments
 * @argc: size of argv
 * @argv: Array containing the command line arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
