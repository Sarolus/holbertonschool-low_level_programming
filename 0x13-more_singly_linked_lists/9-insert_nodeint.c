#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: beginning node of our list
 * @idx: index of the list where the new node should be added.
 * @n: node element
 * Return: return the address of the new node node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = *head;
	listint_t *new = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (h && i != (idx - 1))
		{
			h = h->next;
			i++;
		}

		if (h && i == (idx - 1))
		{
			new->next = h->next;
			h->next = new;
		}
		else
		{
			return (NULL);
		}
	}

	return (new);
}
