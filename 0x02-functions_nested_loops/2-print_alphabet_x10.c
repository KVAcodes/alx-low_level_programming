#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x, y;
	y = 1;

	while (y <= 10)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar(x);
		}
		y++;
		_putchar('\n');
	}
}
