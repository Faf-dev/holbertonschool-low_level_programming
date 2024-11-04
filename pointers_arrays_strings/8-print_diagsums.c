#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	for (j = 0; j < size; j++)
	{
	for (i = 0; i < size; i++)
	{
		printf("[%d], [%d]\n", a[i][j]);
	}
}
