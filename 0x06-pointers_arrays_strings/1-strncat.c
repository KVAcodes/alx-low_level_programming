#include <stdio.h>
#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: appended string
 * @src: source string
 * @n: number of bytes
 *
 * Description: This function concatenates two strings
 * but it only appends the specified number of bytes
 * from the copied string to the appended one
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, z;

	for (x = 0; dest[x] != 0; x++)
	{
	}
	for (z = x; (z <= (x - 1 + n) && src[z - x] != 0); z++)
	{
		dest[z] = src[z - x];
	}
	return (dest);
}

