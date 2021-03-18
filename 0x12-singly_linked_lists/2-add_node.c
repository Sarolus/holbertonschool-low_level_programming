#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: return length.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Beginning of our list_t
 * @str: string parameter of list_t struct.
 * Return: return NULL if one of the parameters is NULL,
 * otherwise the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	if (head == NULL)
	{
		return (NULL);
	}

	h = malloc(sizeof(list_t));

	if (h == NULL)
	{
		return (NULL);
	}

	h->str = strdup(str);
	h->len = _strlen(str);
	h->next = *head;
	*head = h;

	return (h);
}
