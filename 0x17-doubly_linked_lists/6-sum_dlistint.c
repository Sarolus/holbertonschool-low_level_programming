#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a double linked list.
 * @head: head node of our list.
 * Return: return the sum of all the data, if empty return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
