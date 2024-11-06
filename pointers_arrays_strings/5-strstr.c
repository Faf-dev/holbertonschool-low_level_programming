#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack : jsp
 * @needle : pointeur de je ne sais quoi
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int i_haystack = 0;

	while (needle[i] != '\0')
	{
		for (i_haystack = 0; haystack[i_haystack] != '\0'; i_haystack++)
		{
			if (haystack[i_haystack] == needle[i])
			{
				return (needle + i);
			}
		}
		needle++;
	}
	return (NULL);
}
