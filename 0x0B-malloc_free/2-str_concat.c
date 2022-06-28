#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string on success and NULL on
 * failure
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, x, y, z;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != 0; x++)
	{
	}
	for (y = 0; s2[y] != 0; y++)
	{
	}
	z = x + y + 1;

	s = malloc(z * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != 0; a++)
	{
		s[a] = s1[a];
	}
	for (b = 0; s2[b] != 0; b++)
	{
		s[a + b] = s2[b];
	}
	s[a + b] = '\0';
	return (s);
}
