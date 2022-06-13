#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints string argument in reverse
 * @s: string argument
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;
	int length;

	if (s[0] == '0')
	{
		_putchar('0');
	}
	for (i = 0; s[i] != 0; i++)
	{
		length = i;
	}
	for (j = length; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}

