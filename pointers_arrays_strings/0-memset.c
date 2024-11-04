#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @n: bytes of the memory area pointed by str
 * @str : pointeur vers une string
 *
 * Return: Nothing.
 */
char *_memset(char *str, char b, unsigned int n)
{
	while (n != 0)
	{
		str[n - 1] = b;
		n--;
	}
	return (str);
}
