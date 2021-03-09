#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - free memory allocation of dogs structures.
 * @d: structure pointer
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
