#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int sub;

	register short iter = 0;

	while (head)
	{
		sub = head - head->next;
		iter++;
		printf("[%p] %i\n", (void *)head, head->n);
		if (sub > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %i\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (iter);
}
