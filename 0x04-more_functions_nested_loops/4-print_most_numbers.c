#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void);
{
	int x = 48;

	while (x < 58)
	{
		if (x != 50 || x != 52)
			_putchar(x);
	}
	_putchar('\n');
}
