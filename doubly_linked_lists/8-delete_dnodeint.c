#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @index: the place where the node should be deleted
 * @head: the first node
 * Return: 1 if succeeded, 0 instead.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 1;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL && (*head)->prev == NULL)
		{
			*head = NULL;
			free(*head);
			free(temp);
			return (1);
		}
		if (temp->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
		}
		return (1);
	}
	while (count < index && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
		else
			*head = temp->next;
	free(temp);
	return (1);
}
