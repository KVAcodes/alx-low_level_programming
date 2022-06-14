#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of the array.
 * @a: an array
 * @n: integer value
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x <= n - 1; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	printf("\n");
}
