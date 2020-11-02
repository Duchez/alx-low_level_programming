#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of list_t
 */
void free_list(list_t *head)
{
	if (!head)
	{
		free(head->str);
		free_list(head->next);
	}
	free(head);
}
