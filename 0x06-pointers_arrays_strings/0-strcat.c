#include <stdio.h>
#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: appended string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y, z;

	for (x = 0; dest[x] != 0; x++)
	{
	}
	for (y = 0; src[y] != 0; y++)
	{
	}
	for (z = x; z <= (x + y); z++)
	{
		dest[z] = src[z - x];
	}
	return (dest);
}

