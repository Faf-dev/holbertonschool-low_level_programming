#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of dlistint_t
 * @head: the first node of dlistint_t
 * @n: value of the node
 * Return: adress of new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp;


	if (newNode == NULL)
	{
		return (NULL);
	}
		newNode->n = n;
		newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
