#include "lists.h"

/**
 * print_list - print all the elements of list_t
 * @h: elements of list_t
 * Return: length of the list_t
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		printf("[0] (nil)");
	return (h->len);
}
