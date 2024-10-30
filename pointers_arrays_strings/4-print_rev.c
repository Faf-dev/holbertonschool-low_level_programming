#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_rev - main code
 *
 * @s : pointeur du string
 */

void print_rev(char *s)
{
	int longueur = 0;
	char *valeur_s_origine = s;
	int reverse;

	while (*s != '\0')
	{
		longueur++;
		s++;
	}
	for (reverse = longueur - 1; reverse >= 0; reverse--)
	{
		_putchar(reverse[valeur_s_origine]);
	}
	_putchar('\n');
}
