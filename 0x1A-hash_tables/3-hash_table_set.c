#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: hash table pointer
 * @key: key variable
 * @value: key value
 * Return: return 1 on success otherwise 0 if failed.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new, *node;

	if (key == NULL || strlen(value) == 0 || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (!node)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[idx] != NULL)
		new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
