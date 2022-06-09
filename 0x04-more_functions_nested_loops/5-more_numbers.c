#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints the numbers 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			z = y;
			if (y > 9)
			{
				_putchar(49);
				z = y % 10;
			}
			_putchar('0' + z);
		}
		_putchar('\n');
	}
}
