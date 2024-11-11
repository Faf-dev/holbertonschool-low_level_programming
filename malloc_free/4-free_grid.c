#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free toute la grille
 * @grid : la grille a free
 * @height : sers d'indice pour chaque ligne a liberer
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
