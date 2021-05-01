#include "lists.h"

/**
 * print_dlistint - Prints all the lement of a double linked list.
 * @h: head node.
 * Return: return the length of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
