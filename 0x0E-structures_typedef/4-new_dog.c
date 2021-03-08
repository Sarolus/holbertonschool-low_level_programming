#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - Returns lenght of a string.
 * @s: string
 * Return: Return result
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strcpy - Copy string pointed by
 * @src: source
 * @dest: destination
 * Return: return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (result);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: return the new instance.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}

	name = malloc((_strlen(name) + 1) * sizeof(char));

	if (name == NULL)
	{
		free(d);
		return (NULL);
	}

	owner = malloc((_strlen(owner) + 1) * sizeof(char));

	if (owner == NULL)
	{
		free(name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
