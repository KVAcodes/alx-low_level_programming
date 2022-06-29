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

	b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != 0; x++)
	{
	}
	for (y = 0; s2[y] != 0; y++)
	{
	}
	z = x + y;
	s = malloc((z + 1) * sizeof(char));
	if (s  == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != 0; a++)
	{
		s[a] = s1[a];
	}
	for (; s2[b] != 0; a++)
	{
		s[a] = s2[b];
		b++;
	}
	s[z] = '\0';
	return (s);
}
