#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add of two int
 * @a: number 1
 * @b: number 2
 * Return: return sum.
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;

	return (result);
}

/**
 * op_sub - sub of two int
 * @a: number 1
 * @b: number 2
 * Return: return difference.
 */

int op_sub(int a, int b)
{
	int result;

	result = a - b;

	return (result);
}

/**
 * op_mul - mul of two int
 * @a: number 1
 * @b: number 2
 * Return: return product.
 */

int op_mul(int a, int b)
{
	int result;

	result = a * b;

	return (result);
}

/**
 * op_div - div of one int by another
 * @a: number 1
 * @b: number 2
 * Return: return result of division.
 */

int op_div(int a, int b)
{
	int result;

	result = a / b;

	return (result);
}

/**
 * op_mod - mod of two int
 * @a: number 1
 * @b: number 2
 * Return: return remainder of the division.
 */

int op_mod(int a, int b)
{
	int result;

	result = a % b;

	return (result);
}
