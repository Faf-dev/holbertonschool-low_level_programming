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
	int first_half;

	while (str[lon] != '\0')
		lon++;
	for (first_half = lon / 2; first_half < lon; first_half++)
	{
	_putchar(str[first_half]);
	}
	_putchar('\n');
}
