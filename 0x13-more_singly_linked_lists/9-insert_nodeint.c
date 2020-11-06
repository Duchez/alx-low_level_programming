#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given location
 * @head: double pointer to head
 * @idx: index to add new node
 * @n: value at the new node
 * Return: address of new node, NULL if process fails
 */
listint_t *insert_nodeint_at_index(listint **head, unsigned int idx, int n)
{
	listint_t *thisNode;
	listint_t *nNode;

	register uint iter;

	nNode = malloc(sizeof(listint_t));
	if (!head || !nNode)
		return (NULL);
	nNode->n = n;
	if (!idx)
	{
		nNode->next = *head;
		*head = nNode;
		return (nNode);
	}
	thisNode = *head;
	while (thisNode)
	{
		if (iter == idx - 1)
		{
			nNode->next = thisNode->next;
			thisNode->next = nNode;
			return (nNode);
		}
		iter++;
		thisNode = thisNode->next;
	}
	free(nNode);
	return (NULL);
}
