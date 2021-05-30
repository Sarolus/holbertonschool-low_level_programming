#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hash table pointer
 * @key: key we are looking for
 * Return: return the value associated with the element.
 * If not found, return NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
