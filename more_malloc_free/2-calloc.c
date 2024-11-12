#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - fonction calloc
 * @nmemb : nombre d'element
 * @size : taille de bytes necessaire
 * Return: NULL si echec, array sinon
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
