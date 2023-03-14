#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid to free
 * @height: the number of rows in grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;


	i = 0;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
