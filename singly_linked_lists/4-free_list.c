#include "lists.h"

/**
 * free_list - free list_t
 * @head: the first node of list_t
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
