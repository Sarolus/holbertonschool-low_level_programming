#ifndef DOGGO
#define DOGGO

/**
 * struct dog - our doggo structure
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOGGO */