#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copie la string donnee en parametre
 * @str : string a copier
 * Return: NULL si fail, str_cpy sinon
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *strcpy;
	unsigned int i_malloc;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	strcpy = malloc((i + 1) * 1);
	if (strcpy == NULL)
	{
		return (NULL);
	}
	for (i_malloc = 0; i_malloc < i; i_malloc++)
	{
		strcpy[i_malloc] = str[i_malloc];
	}
	strcpy[i_malloc] = '\0';
	return (strcpy);
}
