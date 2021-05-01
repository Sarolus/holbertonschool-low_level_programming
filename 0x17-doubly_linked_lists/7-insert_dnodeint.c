#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: head node of our list
 * @idx: specified index
 * @n: node element
 * Return: return the address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (tmp && i != (idx - 1))
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}

	new->prev = tmp;
	new->next = tmp->next;

	tmp->next->prev = new;
	tmp->next = new;

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	return (new);
}
