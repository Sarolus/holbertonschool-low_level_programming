#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - check arguments
 * @argc: size of *argv[]
 * @argv: arguments
 * Return: return 0.
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[1]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	printf("%d\n", f(num1, num2));

	return (0);
}
