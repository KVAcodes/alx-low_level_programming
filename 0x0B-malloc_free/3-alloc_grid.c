#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: no of columns of 2-D array
 * @height: no of rowa of 2-D array
 * Return: a pointer to the created 2 dimensional array of
 * integers or NULL if space is insufficient
 */
int **alloc_grid(int width, int height)
{
	int a, y, z;
	int **arr;
	int *p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		*(arr + a) = malloc(width * sizeof(int));
		if (*(arr + a) == NULL)
		{
			for (a = 0; a < height; a++)
			{
				p = arr[a];
				free(p);
			}
			free(arr);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			*(*(arr + y) + z) = 0;
		}
	}
	return (arr);
}
