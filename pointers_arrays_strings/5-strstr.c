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

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] != haystack[i])
			{
				break;
			}
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

