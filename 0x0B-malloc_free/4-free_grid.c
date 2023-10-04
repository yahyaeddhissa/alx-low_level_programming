#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a two dimensional grid
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: 0
 *
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
