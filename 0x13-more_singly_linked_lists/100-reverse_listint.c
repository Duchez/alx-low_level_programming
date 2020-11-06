#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer tpo head of list
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *lastPtr = NULL;
	listint_t *ptr = NULL;

	if (!head || !(*head))
		return (*head);
	ptr = (*head)->next;

	while (ptr->next)
	{
		ptr = (*head)->next;
		(*head)->next = lastPtr;
		lastPtr = *head;
		*head = ptr;
	}
	if (ptr)
		ptr->next = lastPtr;
	return (*head);
}
