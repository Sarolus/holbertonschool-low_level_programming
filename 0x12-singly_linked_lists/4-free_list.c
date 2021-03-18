#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Beginning node of our list.
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list(head->next);
	free(head->str);
	free(head);
}
