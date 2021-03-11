#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function to perfom the
 * operation specified user.
 * @s: operator to check
 * Return: return NULL if doesn't match operators.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && strlen(s) == 1)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
