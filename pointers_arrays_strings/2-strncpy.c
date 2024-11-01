#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "2-strlen.c"
/**
 * _strncpy - main
 *
 * @dest : the pointer who recive the value of src
 *
 * @src : the pointer that send the value to dest
 *
 * @n : number of caracter to cpy
 *
 * Return: return the value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i_dest = 0;
	int i = 0;

	while (dest[i_dest] != '\0')
		i_dest++;
	while (i < n && src[i] != '\0')
	{
		dest[i_dest++] = src[i++];
	}
	dest[i_dest] = '\0';
	return (dest);
}
