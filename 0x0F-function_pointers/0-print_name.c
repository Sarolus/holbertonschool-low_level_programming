#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: function name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		return;
	}

	(*f)(name);
}
