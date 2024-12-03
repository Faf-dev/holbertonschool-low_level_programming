#include "lists.h"

/**
 * add_dnodeint - add a node at the beggining of dlistint_t
 * @head: the first node
 * @n: int that go in the node
 * Return: adress of new node or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
