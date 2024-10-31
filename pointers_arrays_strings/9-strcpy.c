#include "main.h"
#include <string.h>

/**
 * _strcpy - main
 *
 * @dest : the pointer who recive the value of src
 *
 * @src : the pointer that send the value to dest
 *
 * @cpydest : copy of dest temporatly
 *
 * Return: return the value of dest
 */

char *_strcpy(char *dest, char *src)
{
	char *cpydest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cpydest);
}
