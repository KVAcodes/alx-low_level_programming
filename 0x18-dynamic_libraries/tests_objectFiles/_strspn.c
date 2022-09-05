#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string containing the prefix substring
 * @accept: string containing the matching characters
 * Return: the number of bytes matching
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x;

	unsigned int num = 0;

	for (i = 0; s[i] != 32; i++)
	{
		for (x = 0; accept[x] != 0; x++)
		{
			if (s[i] == accept[x])
			{
				num += 1;
			}
		}
	}
	return (num);
}
