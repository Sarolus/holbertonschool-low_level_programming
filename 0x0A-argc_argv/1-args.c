#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: size of argv
 * @argv: Array containing the command line arguments
 * Return: return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
