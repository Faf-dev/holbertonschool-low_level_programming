#include "lists.h"

/**
 * list_len - return the number of elements in the linked list_t
 * @h: node of list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}