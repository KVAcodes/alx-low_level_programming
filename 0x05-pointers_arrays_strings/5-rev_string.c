#include <stdio.h>
#include "main.h"
/**
 * rev_string - a function that reverses a string..
 * @s: character value.
 */
void rev_string(char *s)
{
	int i;
	int x = 0, y = 0;
	char tmp;

	for (i = 0; s[i] != 0; i++)
		;
	y = i - 1;
	while (x < y)
	{
		tmp = s[x];
		s[x] = s[y];
		s[y] = tmp;
		x++;
		y--;
	}
}


