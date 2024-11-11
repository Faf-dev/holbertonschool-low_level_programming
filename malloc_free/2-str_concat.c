#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatene deux strings
 * @s1 : premiere string
 * @s2 : deuxieme string a mettre a la suite de s1
 * Return: NULL si echec, s1+s2 sinon
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int icpy;
	unsigned int jcpy;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	s3 = malloc((i + j + 1) * 1);

	if (s3 == NULL)
		return (NULL);
	for (icpy = 0; icpy < i; icpy++)
		s3[icpy] = s1[icpy];
	for (jcpy = 0; jcpy < j; jcpy++)
	{
		s3[icpy] = s2[jcpy];
		icpy++;
	}
	s3[icpy + jcpy] = '\0';
	return (s3);
}
