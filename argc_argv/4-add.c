#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplie deux argc
 * @argc : argument count
 * @argv : string with argc value
 * Return: 1 if error, else 0
 *
 */

int main(int argc, char **argv)
{
	int i; 
	unsigned int j;
	unsigned int addition = 0;
	char *check;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			check = argv[i];

			for (j = 0; j < strlen(check); j++) /* parcours check */
			{
			if (check[j] < 48 || check[j] > 57) /* verifie si chaque valeur de check est un decimal */
			{
				printf("Error\n"); 
				return (1);
			}
			addition += atoi(check); /* converti char en int et additionne chaque valeur */
			check++; /* incrementation de check pour passer au caractere suivant */
		}
	}
		printf("%d\n", addition);
	}
	return (0);
}
