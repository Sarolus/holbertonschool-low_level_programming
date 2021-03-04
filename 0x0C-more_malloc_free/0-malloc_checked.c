#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: return the pointer to allocated memory otherwise exit(98).
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
