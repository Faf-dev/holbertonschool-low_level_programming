#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - main code
 *
 * @s : pointer to the string
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
