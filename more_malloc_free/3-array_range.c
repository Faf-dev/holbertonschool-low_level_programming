#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creer un array d'entier
 * @min : premieres valeurs a integrer
 * @max : secondes valeurs a integrer
 * Return: NULL si echec, array sinon
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * 4);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
