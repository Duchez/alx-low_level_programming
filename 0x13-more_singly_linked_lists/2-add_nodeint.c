#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning if a list
 * @head: double pointer to head
 * @n: integer
 * Return: adress of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nNode = malloc(sizeof(listint_t));

	if (!head || !nNode)
		return (NULL);
	nNode->n = n;
	nNode->next = NULL;
	if (*head)
		nNode->next = *head;
	*head = nNode;
	return (nNode);
}
