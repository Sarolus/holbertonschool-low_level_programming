#include "lists.h"

/**
 * free_dlistint - Free a double linked list.
 * @head: head node of our list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_dlistint(head->next);
	free(head);
}
