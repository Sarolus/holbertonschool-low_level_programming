#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Beginning node of our list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
