#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Beginning node of our listint_t
 * @n: int parameter of listint_t struct.
 * Return: return NULL if one of the parameters is NULL,
 * otherwise the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	if (head == NULL)
	{
		return (NULL);
	}

	h = malloc(sizeof(listint_t));

	if (h == NULL)
	{
		return (NULL);
	}

	h->n = n;
	h->next = *head;
	*head = h;

	return (h);
}
