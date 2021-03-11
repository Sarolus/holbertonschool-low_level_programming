#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: parameters.
 * Return: return 0 if n == 0, otherwise return the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list aprm;
	unsigned int i, sum;

	va_start(aprm, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(aprm, int);
	}

	va_end(aprm);

	return (sum);
}
