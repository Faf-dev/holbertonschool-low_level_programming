#include "main.h"
#include <stdio.h>

/**
 * puts_half - main code
 *
 * @str : pointeur vers la chaine de caractere main.c
 */

void puts_half(char *str)
{
	int lon = 0;
	int first_lon;

	while (str[lon] != '\0')
		lon++;
	for (first_lon = lon / 2; first_lon < lon; first_lon++)
	{
	_putchar(str[first_lon]);
	}
	_putchar('\n');
}
