#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a double linked list
 * @head: head node of our list.
 * @index: specified index
 * Return: return 1 if it succeeded, otherwise -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	dlistint_t *tmp;
	unsigned int i;

	tmp = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = tmp->next;
		tmp->prev = NULL;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		node = tmp;
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		i++;
	}
	node->next = tmp->next;

	if (node->next != NULL)
		node->next->prev = node;
	free(tmp);

	return (1);
}
