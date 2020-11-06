#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *thisNode;
	listint_t *hold;

	if (!head)
		return;
	thisNode = *head;
	while (thisNode)
	{
		hold = thisNode;
		thisNode = hold->next;
		free(hold);
	}
	*head = NULL;
	head = NULL;
}
