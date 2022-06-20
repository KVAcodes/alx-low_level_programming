#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be checked through
 * @needle: string to look for
 * Return: a pointer to the beginning of substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x, y, z, test;

	test = 0;
	z = 1;

	for (y = 0; needle[y] != 0; y++)
	{
	}
	for (i = 0; haystack[i] >= 0; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (x = i + 1; x < i + y; x++)
			{
				if (haystack[x] == needle[z])
				{
					test += 1;
				}
				z++;
			}
			if (test == y - 1)
			{
				return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
