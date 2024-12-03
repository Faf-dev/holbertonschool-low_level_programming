
#include "lists.h"

/**
 * dlistint_len - return the number of node of dlistint_t
 * @h: node of dlistint_t
 * Return: the number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}