#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies a memory area
 * @dest: recipient memory area
 * @src: copied memory area
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, num;

	num = (int) n;
	for (i = 0; i < num; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
