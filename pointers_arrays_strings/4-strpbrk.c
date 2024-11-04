#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 * @str : string to analyse
 * @accept : string allowed
 *
 * Return: Always 0.
 */
char *_strpbrk(char *str, char *accept)
{
	int i = 0;
	int i_accept;

	while (str[i] != '\0')
	{
		for (i_accept = 0; accept[i_accept] != '\0'; i_accept++)
		{
			if (accept[i_accept] == str[i])
			{
				return (str + i);
			}
		}
		str++;
	}
	return (NULL);
}
