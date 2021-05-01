#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a double linked list.
 * @head: head node of our list.
 * @index: specified index
 * Return: return the nth node, if it doesn't exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
