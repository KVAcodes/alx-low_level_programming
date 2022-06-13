#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints string argument in reverse
 * @s: string argument
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}

