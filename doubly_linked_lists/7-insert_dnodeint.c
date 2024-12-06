#include "lists.h"
/**
 * insert_dnodeint_at_index - create a node at a given position
 * @h: the first node
 * @idx: the given position where the new node should be
 * @n: the value of the new node
 * Return: the adress of the new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;
	unsigned int count = 0;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	temp = *h;
	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	temp = *h;
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	newNode->next = temp->next;
	newNode->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = newNode;
	temp->next = newNode;
	return (newNode);
}
