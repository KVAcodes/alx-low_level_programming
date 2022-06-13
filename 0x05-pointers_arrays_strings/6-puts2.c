#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string.
 * @str: character value
 */
void puts2(char *str)
{
	int i, x;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (x = 0; x < i; x += 2)
		_putchar(str[x]);
	_putchar('\n');
}


