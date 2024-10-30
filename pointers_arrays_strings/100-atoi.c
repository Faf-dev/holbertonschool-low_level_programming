#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - main code 
 */

int _atoi(char *s)
{
	int longueur;

	for (s[longueur] = 0; longueur < s; longueur++)
	{
		while (s[longueur] > 48 && s[longueur] < 57)
		{
			_putchar(s[longueur]);
		}
	}
	return (0);
}
