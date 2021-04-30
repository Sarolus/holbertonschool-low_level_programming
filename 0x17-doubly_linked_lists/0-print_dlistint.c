#include "lists.h"

/**
 * print_dlistint - Prints all the lement of a double linked list.
 * @h: head node.
 * Return
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return;
	}
	PrintList(h->next);
	count++;
	printf("%d\n", h->n);

	return (count);
}
