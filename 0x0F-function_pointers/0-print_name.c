#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: function name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
