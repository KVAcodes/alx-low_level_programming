#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: void
 *
 */
void print_alphabet(void)
{
	int x;

	for (x = 97 ; x <= 122; x++)
		_putchar(x);
		_putchar('\n');
}
