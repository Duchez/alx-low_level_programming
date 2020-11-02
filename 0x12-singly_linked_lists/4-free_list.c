#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of list_t
 */
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	while (node)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
	head = NULL;
}
