#include "lists.h"
/**
 * sum_listint - sums all the data in the list
 * @head: pointer to head of list
 *
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	listint_t *thisNode;

	register int sum = 0;

	if (!head)
		return (0);
	thisNode = head;
	while (thisNode)
	{
		sum += thisNode->n;
		thisNode = thisNode->next;
	}
	return (sum);
}
