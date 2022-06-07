#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x;

	for (x = 1; x < 11; x++)
	{
		for (x = 97; x < 123; x++)
			_putchar(x);
		_putchar('\n');
	}
}
