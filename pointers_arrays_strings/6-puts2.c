#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts2 - main code
 *
 * @str : variable of string
 */
void puts2(char *str)
{
	int longueur = 0;
	int size;

	while (str[longueur] != '\0')
		longueur++;
	for (size = 0; size < longueur; size++)
	{
		if (size % 2 == 0)
			_putchar(str[size]);
	}
	_putchar('\n');
}
