#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to head
 * @index: index of return value
 *
 * Return: address of node at input
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *thisNode;

	register uint iter = 0;

	thisNode = head;

	while (thisNode)
	{
		if (iter == index)
			return (thisNode);
		iter++;
		thisNode = thisNode->next;
	}
	return (thisNode);
}
