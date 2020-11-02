#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the list
 * @str: struct string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tail = *head;
	int newElement = 0;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->next = NULL;

	if (!*head)
		*head = newNode;
	else
	{
		while (tail->next)
			tail = tail->next;
		tail->next = newNode;
	}
	while (str[newElement])
		newElement++;
	newNode->len = newElement;
	return (newNode);
}
