#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a double linked list.
 * @h: head node.
 * Return: return the length of the string.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
