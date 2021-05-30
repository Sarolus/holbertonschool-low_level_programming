#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];

		while (node)
		{
			printf("%s", flag == 0 ? "" : ", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag++;
		}
	}
	printf("}\n");
}
