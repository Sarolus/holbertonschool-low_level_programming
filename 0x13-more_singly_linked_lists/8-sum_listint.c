#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listint_t linked list.
 * @head: Beginning node of our list.
 * Return: return the sum of all the data, if empty return 0.
 */
int sum_listint(listint_t *head)
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
