#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: double pointer to head
 * @index: index of node to be deleted
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *this;
	listint_t *next;

	register uint iter = 0;

	if (!head || (*head))
		return (-1);
	this = *head;
	if (!index)
	{
		*head = this->next;
		free(this);
		return (1);
	}
	while (this && iter < index - 1)
	{
		this = this->next;
		iter++;
	}
	if (!this || !(this->next))
		return (-1);
	next = this->next->next;
	free(this->next);
	this->next = next;
	return (1);
}
