#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 * @a = row, b = column, rep = digits of the current result
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b;
	int rep;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			rep = a * b;
			if (b == 0)
			{
				_putchar('0' + rep);
			}
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}

}
