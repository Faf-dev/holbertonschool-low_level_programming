#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @str : la string a analyser
 * @accept : ca ne refuse pas
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *str, char *accept)
{
	int byte = 0;
	int i;

	while (str[i] != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (accept[i] == *str)
			byte++;
	}
	str++;
	}
	return (byte);
}
