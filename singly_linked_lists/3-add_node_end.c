#include "lists.h"

/**
 * add_node_end - add a node at the end of list_t
 * @head: first node of list_t
 * @str: string (malloc'ed string)
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newLastNode;
	list_t *current;
	int i = 0;

	while (str[i] != '\0')
		i++;
	newLastNode = malloc(sizeof(list_t));

	if (newLastNode == NULL)
	{
		free(newLastNode);
		return (NULL);
	}
	newLastNode->str = strdup(str);
	newLastNode->len = i;
	if (*head == NULL)
	*head = newLastNode;
	else
	{
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = newLastNode;
	}
	return (newLastNode);
}
