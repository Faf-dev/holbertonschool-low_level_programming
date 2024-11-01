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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
