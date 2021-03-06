#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Beginning node of our list.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint(head->next);
	free(head);
}

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Beginning node of our list.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return;
	}

	free_listint((*head)->next);
	free(*head);

	*head = NULL;
}
