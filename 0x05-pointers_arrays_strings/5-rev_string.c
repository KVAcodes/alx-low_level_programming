#include <stdio.h>
#include "main.h"
/**
 * rev_string - a function that reverses a string..
 * @s: s is a string(pointer to the first memory adrees of a string)
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}


