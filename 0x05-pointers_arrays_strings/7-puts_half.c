#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: character value
 */
void puts_half(char *str)
{
	int i, x;

	for (i = 0; str[i] != '\0'; i++)
		;
	if ((i % 2) == 0)
	{
		for (x = i / 2; x < i; x++)
			_putchar(str[x]);
i	}
	else if ((i % 2) != 0)
	{
		for (x = (i + 1) / 2; x < i; x++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
