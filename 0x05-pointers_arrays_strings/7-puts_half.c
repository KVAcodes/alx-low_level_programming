#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that prints the second half of a string.
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int x, loc, y, z;

	for (x = 0; str[x] != 0; x++)
	{
	}	
	loc = x;
	if (loc % 2 == 0)
	{
		y = (x / 2);
	}
	else if (x % 2 == 1)
	{
		y = (x  + 1) / 2;
	}
	for (z = y; z <= x - 1; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
