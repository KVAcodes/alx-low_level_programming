#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 * @x = row, y = column, z = digits of the current result
 * Return: void
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; y <= 9; z++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			z = (x * y);
			if ((z / 10) > 0)
			{
				_putchar((z / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((z % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}
