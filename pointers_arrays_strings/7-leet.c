#include "main.h"
#include <stdio.h>

/**
 * leet - main code
 *
 * @str : pointeur de la string
 *
 * Return: Always str.
 */

char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		while (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		while (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		while (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		while (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	return (str);
}
