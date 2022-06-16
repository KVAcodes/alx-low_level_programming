#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: recipient string
 * @src: copied string
 * @n: number of bytes to be copied
 *
 * Description: copies n bytes from a string into another
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x, y, i;

	for (i = 0; src[i] != 0; i++)
	{
	}
	for (x = 0; x < n && src[x] != 0; x++)
	{
		dest[x] = src[x];
	}
	if (i < n)
	{
		for (y = i; y <= n; y++)
		{
			dest[y] = '\0';
		}
	}

	return (dest);
}
