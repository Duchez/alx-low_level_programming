#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a singly linked list
 * @h: pointer to struct
 *
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	register int len = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil\n)");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
