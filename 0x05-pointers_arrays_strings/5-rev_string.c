#include <stdio.h>
#include "main.h"
/**
 * rev_string - a function that reverses a string..
 * @s: s is a string(pointer to the first memory adrees of a string)
 */
void rev_string(char *s)
{
	int i;
	int x;
	char tmp;

	for (i = 0; s[i] != 0; i++)
	{
	}
	i--;
	for (x = 0; x <= i; x++)
	{
		tmp = s[x];
		s[x] = s[i];
		s[i] = tmp;
		i--;
	}
}


