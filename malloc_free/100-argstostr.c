#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatene tout les arguments
 * @ac: nombre d'arguments
 * @av: string des arguments
 *
 * Return: NULL si echec, s3 sinon.
 */
char *argstostr(int ac, char **av)
{
	char *s3;
	int count = 0;
	int i;
	int j;
	int icpy = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++; /* on incremente pour chaque caractere */
		}
		count++; /* incrementation sup pour le \n a rajouter */
	}

	s3 = malloc(count + 1 * sizeof(char)); /* +1 pour le \0 */

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s3[icpy] = av[i][j];
			icpy++;
		}
		s3[icpy] = '\n';
		icpy++;
	}
	s3[icpy] = '\0';
	return (s3);
}
