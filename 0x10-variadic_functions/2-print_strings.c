#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list aprm;
	unsigned int i;

	va_start(aprm, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(aprm, const char *));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(aprm);
}
