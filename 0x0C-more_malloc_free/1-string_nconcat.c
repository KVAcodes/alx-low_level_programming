#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates string with n bytes of
 * another
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes of s2 to concatenate
 * Return: either a pointer to the allocated memory or NULL
 * if the function fails due to malloc failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int b, x, y;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s2[x] != 0; x++)
	{
	}
	for (b = 0; s1[b] != 0; b++)
	{
	}
	if (n >= x)
	{
		n = x;
	}
	s = malloc(sizeof(s1) + n);
	if (s == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < b; y++)
	{
		s[y] = s1[y];
	}
	for (y = 0; y < n; y++)
	{
		s[y + b] = s2[y];
	}
	s[b+ n] = '\0';
	return (s);
}
