#include "lists.h"

/**
 * sum_dlistint - calculate the sum of integer of dlistint_t
 * @head: the first node
 * Return: The sum of all data or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
