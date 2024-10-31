#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include "_putchar.c"

/**
 * _atoi - main code
 *
 * @s : pointeur vers nb
 *
 * Return: always 0 
 */

int _atoi(char *s)
{
	int longueur = 0;

	while (s[longueur])
	{
		longueur++;
	}
	return (*s);
}
