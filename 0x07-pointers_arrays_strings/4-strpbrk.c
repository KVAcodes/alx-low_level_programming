#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string that contains the set of bytes
 * Return: a pointer to first occurrence in s or NULL if no
 * bytes are found to match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (x = 0; accept[x] != 0; x++)
		{
			if (s[i] == accept[x])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
