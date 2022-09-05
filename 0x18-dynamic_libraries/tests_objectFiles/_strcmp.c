#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two stings
 * @s1: first string or pointer to string
 * @s2: second string or pointer to string
 *
 * Return: (s1[0] - s2[0] or 0 if s1[0] == s2[0]
 */
int _strcmp(char *s1, char *s2)
{
	int x;
	int y = 0;

	for (x = 0; s1[x] != 0 && y == 0; x++)
	{
		y = s1[x] - s2[x];
	}
	return (y);
}
