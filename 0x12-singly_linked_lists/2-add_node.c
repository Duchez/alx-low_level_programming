#include "lists.h"
/**
 * add_node - adds a new node at the beggining of a list
 * @head: head of the linked list
 * @str: string defined in struct
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int newElement = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);

	while (str[newElement])
		newElement++;

	newNode->len = newElement;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
