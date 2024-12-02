#include "lists.h"

/**
 * free_list - free list_t
 * @head: the first node of list_t
 */

void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		free(head->len);
		free(head);
	}
}
