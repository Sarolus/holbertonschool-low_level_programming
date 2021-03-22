#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: node
 * Return: return 0 if NULL otherwise the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
