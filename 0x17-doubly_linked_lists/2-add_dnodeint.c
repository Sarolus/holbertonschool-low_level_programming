#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double linked list.
 * @head: Head node of our list.
 * @n: int parameter of dlistint_t struct.
 * Return: return NULL if one of the parameters is NULL,
 * otherwise the address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	if (head == NULL)
	{
		return (NULL);
	}

	h = malloc(sizeof(dlistint_t));

	if (h == NULL)
	{
		return (NULL);
	}

	h->n = n;
	h->next = *head;
	h->prev = NULL;
	*head = h;

	if (h->next != NULL)
		h->next->prev = h;

	return (h);
}
