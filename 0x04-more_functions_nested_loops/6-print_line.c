#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a line
 * @n: numbers of _ to be printed
 * Return: 0
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
