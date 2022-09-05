#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  a function that copies the string.
 * @dest : string to copied to
 * @src  : string to copu
 *
 *Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	for (x = 0; src[x] != 0; x++)
	{
	}
	for (y = 0; y <= x; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}


