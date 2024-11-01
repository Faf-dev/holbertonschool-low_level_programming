#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "2-strlen.c"
/**
 * _strcat - main
 *
 * @dest : the pointer who recive the value of src
 *
 * @src : the pointer that send the value to dest
 *
 * Return: return the value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i_dest = 0;
	int i = 0;

	while (dest[i_dest] != '\0')
		i_dest++;
	while (src[i] != '\0')
	{
		dest[i_dest + i] = src[i];
		i++;
	}
	dest[i_dest + i] = '\0';
	return (0);
}
