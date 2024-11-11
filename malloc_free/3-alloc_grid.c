#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return un tableau de tableau de pointeur
 * @width : largeur
 * @height : hauteur
 * Return: NULL si echec, tableau si reussite
 */
int **alloc_grid(int width, int height)
{
	int *grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc((width * height) * 4);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width * height; i++)
	{
		grid[i] = 0;
	}
	return (grid);
}
