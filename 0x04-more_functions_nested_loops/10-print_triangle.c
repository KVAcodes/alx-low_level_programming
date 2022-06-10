include "main.h"
/**
 * print_triangle - Draws a triangle
 * @size: Length of the triangle
 * Return: voif
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar(j < (size - i) ? ' ' : '#');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
