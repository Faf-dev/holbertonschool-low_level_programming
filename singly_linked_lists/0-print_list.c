#include "lists.h"

/**
 * print_list - print all the elements of list_t
 * @h: node of list_t
 * Return: length of the list_t
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
			else
			{
				printf("[%u] %s\n", h->len, h->str);
			}
			h = h->next;
			count++;
	}
	return (count);
}
