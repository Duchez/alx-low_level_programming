#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head of list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	register unsigned int iter = 0;

	while (h)
	{
		h = h->next;
		iter++;
	}
	return (iter);
}
