#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the allocated memory by alloc_grid
 * @grid: 2-D array or array of pointers
 * @height: no of rows or pointers
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(*(grid + x));
	}
	free(grid);
}

