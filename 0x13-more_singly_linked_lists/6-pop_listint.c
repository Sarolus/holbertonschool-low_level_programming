#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listin_t linked list.
 * @head: Beginning node of our list
 * Return: return the head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	n = 0;
	tmp = NULL;
	if (*head == NULL)
	{
		return (0);
	}

	if (*head != NULL)
	{
		n = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	return (n);
}
