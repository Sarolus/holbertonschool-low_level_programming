#include "lists.h"

/**
 * print_dlistint - Prints all the lement of a double linked list.
 * @h: head node.
 * Return
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return;
	}
	dlistint_len(h->next);
	count++;

	return (count);
}
