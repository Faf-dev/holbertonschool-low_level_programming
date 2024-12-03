#include "lists.h"

/**
 * free_dlistint - frees dlistint_t
 * @head: first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->prev != NULL)
	{
		temp = head;
		head = head->prev;
	}
	free(temp);
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
