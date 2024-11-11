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
	int **grid;
	int i = 0;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * 8); /* alloc de 8octets(pointeur) par hauteur */

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * 4);
		if (grid[i] == NULL)
		{ /* free toute la mem. pour l'echec de l'alloc d'une ligne */
			while (i > 0)
			{
			free(grid[i - 1]);
			i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0; /* initialition a 0 de h et w */
		}
	}
	return (grid); /* succes! */
}
