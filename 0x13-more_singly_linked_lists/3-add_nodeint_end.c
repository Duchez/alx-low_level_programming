#include "lists.h"
/**
 * add_nodeint_end - adds a new  node at the end of a list
 * @head: double pointer to head
 * @n: integer
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nNode = malloc(sizeof(listint_t));
	listint_t *thisNode;

	if (!head || !nNode)
		return (NULL);
	nNode->n = n;
	nNode->next = NULL;

	if (!*head)
		*head = nNode;
	else
	{
		thisNode = *head;
		while (thisNode->next)
			thisNode = thisNode->next;
		thisNode->next = nNode;
	}
	return (nNode);
}
