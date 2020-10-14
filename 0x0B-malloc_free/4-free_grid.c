#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
*free_grid - frees a 2D grid
*@grid: double pointer to array
*@height: grid height
*
*Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
