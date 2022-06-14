#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that prints the second half of a string.
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int x, y, z;

	for (x = 0; str[x] != 0; x++)
	{
	}
	x--;
	if (x % 2 == 0)
	{
		y = x / 2;
	}
	else
	{
		y = (x - 1) / 2;
	}
	for (z = y; z <= x; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
