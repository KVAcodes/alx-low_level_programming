#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 * Return: nothing (void)
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
