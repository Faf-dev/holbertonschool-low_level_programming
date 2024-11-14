#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - code manuel de la fonction realloc
 * @ptr: pointeur vers la string qui contient les caracteres
 * @old_size: premiere taille d'octet a allouer
 * @new_size: taille finale a allouer avec realloc
 * Return: NULL si echec, ptr sinon.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrstr;
	unsigned int i;

	if (ptr == NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		if (new_size > 0)
			ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
	{
		ptrstr = malloc(new_size);
	if (ptrstr == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
		ptrstr[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptrstr);
	}
	if (new_size > old_size)
	{
		ptrstr = malloc(new_size);
		if (ptrstr == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			ptrstr[i] = ((char *)ptr)[i];
		free(ptr);
		return (ptrstr);
	}
	return (0);
}



