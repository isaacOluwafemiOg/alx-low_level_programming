#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2d array of integers
 * @width: number of integers on each row
 * @height: second dimension
 *
 * Return: a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **v;
	int *u;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	v = malloc(sizeof(u) * height);
	if (v == NULL)
	{
		free(v);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		v[i] = (int *)malloc(sizeof(int) * width);
		if (v[i] == NULL)
		{
			free(v);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			v[i][j] = 0;
		}
	}
	return (v);
}
