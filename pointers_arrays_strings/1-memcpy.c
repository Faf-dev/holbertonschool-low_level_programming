#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest : the address of memory to print
 * @src : the size of the memory to print
 *
 * Return: Dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n != 0)
	{
		if (src < n)
		{
			n = src;
		}
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}
