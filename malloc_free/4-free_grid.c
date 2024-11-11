#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * free_grid - libere la memoire d'une grille
 * @grid : la grille a liberer
 * @height : sers d'indicateur pour liberer chaque ligne
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
