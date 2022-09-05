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
	int z, p, x, i;
	int y = 0;
	int test = 0;

	for (z = 0; needle[z] != 0; z++)
	{
	}
	for (p = 0; haystack[p] != 0; p++)
	{
	}
	for (x = 0; x < p; x++)
	{
		if (haystack[x] == needle[y])
		{
			for (i = x; i < x + z; i++)
			{
				if (haystack[i] == needle[y])
				{
					test += 1;
				}
				y++;
			}
			if (test == z)
			{
				return (&haystack[x]);
			}
			else
			{
				continue;
			}
		}
	}
	return (NULL);
}
