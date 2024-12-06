#include "lists.h"

/**
 * get_dnodeint_at_index - create a note at the index
 * @head: the first node
 * @index: where the node should be
 * Return: the nth node or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL && i < index)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
