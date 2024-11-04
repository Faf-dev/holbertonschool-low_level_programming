#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 * @str : pointe la string a fouiller
 * @c : char a localiser
 *
 * Return: Always 0.
 */
char *_strchr(char *str, char c)
{
	int i = 0;

	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return (str + i);
	return (0);
}
