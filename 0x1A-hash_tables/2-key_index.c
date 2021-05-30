#include "hash_tables.h"

/**
 * key_index - Give the index of a key.
 * @key: key variable
 * @size: size of the array of the hash table.
 * Return: return the index of the key/value pair.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);

	hash = hash_djb2(key);
	hash %= size;

	return (hash);
}
