#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creer un tableau de caractere
 * @size : taille de l'array
 * @c : caractere dans l'array
 * Return: NULL si fail, sinon l'array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * 1);

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
