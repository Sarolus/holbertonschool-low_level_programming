#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of the array
 * Return: return a pointer to the newly created hash table,
 * otherwise if something went wrong, return NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL || size == 0)
		return (NULL);

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	table->size = size;

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
