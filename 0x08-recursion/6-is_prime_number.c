#include "holberton.h"

/**
 * prime_check - Check specified number to know if prime number or not.
 * @n : Number that we check
 * @check: Divisor used to check n
 * Return: return 1 if prime number, otherwise 0
 */

int prime_check(int n, int check)
{
	if (check <= 1)
	{
		return (0);
	}
	else if (check == 2)
	{
		return (1);
	}
	else if (n % check == 0)
	{
		return (0);
	}

	return (prime_check(n, check - 1));
}

/**
 * is_prime_number - Returns if prime number or not
 * @n: Checked number
 * Return: return the result of the prime_check function
 */

int is_prime_number(int n)
{
	return (prime_check(n, n - 1));
}
