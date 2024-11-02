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
	int i_mtts;
	char min[] = "aeotl";
	char maj[] = "AEOTL";
	char replace[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (i_mtts = 0; i_mtts < 5; i_mtts++)
		{
		if (str[i] == min[i_mtts] || str[i] == maj[i_mtts])
			str[i] = replace[i_mtts];
		}
	}
	return (str);
}
