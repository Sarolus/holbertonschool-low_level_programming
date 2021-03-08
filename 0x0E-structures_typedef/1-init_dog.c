#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: structure pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
