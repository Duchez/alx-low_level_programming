#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: array width
* @height: array height
* Return: double pointer to multi-dimen array
*/
int **alloc_grid(int width, int height)
{
	int **grid, row, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	/*if memory is insifficuent*/
	if (!grid)
		return (NULL);

	col = 0;
	while (col < height)
	{
		*(grid + col) = malloc(width * sizeof(int));

		if (!(*(grid + col)))
		{
			while (col--)
				free(*(grid + col));
			free(grid);
			return (NULL);
		}
		row = 0;
		while (row < width)
		{
			*(*(grid + col) + row) = 0;
			row++;

		}
		col++;
	}

	return (grid);
}
