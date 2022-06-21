#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: length and breadth of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, x;

	int tmp1 = size + 1;
	int tmp2 = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x <= size * size; x = x + tmp1)
	{
		sum1 += a[x];
	}
	for (i = tmp2; i <= (size * tmp2) + 1; i = i + tmp2)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
