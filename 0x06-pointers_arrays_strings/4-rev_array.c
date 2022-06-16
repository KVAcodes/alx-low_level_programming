#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of integers
 * @n: number of integers in array a
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y, z;
	int tmparray[1000];

	y = n - 1;

	for (x = 0; x < n; x++)
	{
		tmparray[x] = a[y];
		y--;
	}
	for (z = 0; z < n; z++)
	{
		a[z] = tmparray[z];
	}
}
