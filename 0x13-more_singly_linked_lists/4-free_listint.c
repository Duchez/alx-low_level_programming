#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	if (!head)
		return;
	while (head)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
	head = NULL;
}
