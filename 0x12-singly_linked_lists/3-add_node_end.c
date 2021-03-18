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
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Beginning node of our list_t
 * @str: string parameter of list_t struct.
 * Return: return NULL if one of the parameters is NULL,
 * otherwise the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	return (i);
}
