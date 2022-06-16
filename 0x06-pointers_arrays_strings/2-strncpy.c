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
	int x;

	for (x = 0; x < n && src[x] != 0; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
