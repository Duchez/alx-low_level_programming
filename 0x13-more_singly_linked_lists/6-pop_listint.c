#include "lists.h"
/**
 * pop_listint - deletes the head of a linked list
 * @head: double pointer to head
 *
 * Return: data in head node
 */
int pop_listint(listint_t **head)
{
	listint_t *thisNode;
	int data;

	if (!(*head) || !head)
		return (0);
	thisNode = *head;
	data = thisNode->n;
	*head = (*head)->next;
	free(thisNode);
	return (data);
}
