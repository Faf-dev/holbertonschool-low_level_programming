#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest : the address of memory to print
 * @src : the size of the memory to print
 * @n : number of caractere to print
 *
 * Return: Dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
