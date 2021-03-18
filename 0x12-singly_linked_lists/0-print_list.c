#include "lists.h"

/**
 * print_list - Prints all the lelements of a list_t list.
 * @h: node
 * Return: return the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}
