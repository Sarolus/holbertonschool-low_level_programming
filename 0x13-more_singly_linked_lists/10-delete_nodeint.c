#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node node at index of a linked list.
 * @head: heading node
 * @index: specified index
 * Return: return 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *tmp;
	unsigned int i;

	tmp = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		node = tmp;
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	node->next = tmp->next;
	free(tmp);

	return (1);
}
