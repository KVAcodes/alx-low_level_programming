#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	unsigned int var1, var2, var3;
	char *s;

	var3 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	var1 = strlen(s1);
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	s = malloc(var1 + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (var2 = 0; var2 < var1; var2++)
	{
		s[var2] = s1[var2];
	}
	for (; var2 < var1 + n; var2++)
	{
		s[var2] = s2[var3];
		var3++;
	}
	s[var2] = '\0';
	return (s);
}
