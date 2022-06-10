#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * @n: numbers of _ to be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		if (x > 0)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
		
}
