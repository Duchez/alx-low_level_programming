#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	register size_t iter = 0;

	while (h)
	{
		h = h->next;
		iter++;
	}
	return (iter);
}
