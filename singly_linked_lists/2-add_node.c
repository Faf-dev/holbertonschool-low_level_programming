#include "lists.h"

/**
 * add_node - add a new node at the beggining of list_t
 * @head: the first node
 * @str: string - (malloc'ed string)
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i = 0;

	while (str[i] != '\0')
		i++;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
