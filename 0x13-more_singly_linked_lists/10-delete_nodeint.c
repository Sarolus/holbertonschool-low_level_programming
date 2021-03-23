#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: head node
 * @index: index of the node
 * Return: return 1 if success, otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head;
	listint_t *new = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}

	if (index != 0)
	{
		while (h && i != (index - 1))
		{
			h = h->next;
			i++;
		}
		if (h && i == (index - 1))
		{
			new = h->next->next;
			free(h->next);
			h->next = new;
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
