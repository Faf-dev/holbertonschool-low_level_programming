#include "lists.h"

/**
 * free_dlistint - frees dlistint_t
 * @head: first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
