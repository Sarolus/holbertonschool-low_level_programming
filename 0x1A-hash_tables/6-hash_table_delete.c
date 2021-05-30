#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: hash table pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];

		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
