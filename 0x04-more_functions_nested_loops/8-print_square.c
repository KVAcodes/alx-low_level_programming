#include <stdio.h>
#include "main.h"
/**
 * print_square - draws a square
 * @size: size of square to be printed
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
