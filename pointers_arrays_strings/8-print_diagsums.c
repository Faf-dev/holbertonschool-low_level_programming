#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - check the code
 * @a : pointer
 * @size : taille des colonnes
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int result = 0;
	int result2 = 0;

	for (i = 0; i < size; i++)
	{
		result += a[i * (size + 1)];
		result2 += a[i * size + (size - 1 - i)];
	}
	printf("%i, %i\n", result, result2);
}
