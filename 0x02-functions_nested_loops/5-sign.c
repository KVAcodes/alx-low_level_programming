#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: n is of type int
 * Return: 1, 0 and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
		return (3);
}
