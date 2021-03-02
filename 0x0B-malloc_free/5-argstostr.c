#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - Concatenates all the arguments
 * @ac: number of argument
 * @av: Arguments vecto
 * Return: return the result or NULL if failed.
 */

char *argstostr(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *result;

	result = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	return (result);
}
