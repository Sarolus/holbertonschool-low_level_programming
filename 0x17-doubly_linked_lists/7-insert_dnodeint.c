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
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	else
	{
		while (tmp && i != (idx - 1))
		{
			h = h->next;
			i++;
		}

		if (tmp && i == (idx - 1))
		{
			new->next = tmp;
			if (tmp->prev)
			{
				new->prev = tmp->prev;
				tmp->prev->next = new;
			}
			else
				*h = new;
			tmp->prev = new;
		}
		else if (i == idex)
			new = add_dnodeint_end(h, n);
	}
	return (new);
}
