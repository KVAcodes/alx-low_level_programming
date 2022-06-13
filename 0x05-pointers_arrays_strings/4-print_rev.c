#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints string argument in reverse
 * @s: string argument
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length;

	for (i = 0; s[i] != 0; i++)
	{
		length = i;
	}
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
