#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: the constant character
 * @n: no of bytes
 * Return: a pointer the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int num;

	num = (int) n;

	for (i = 0; i < num; i++)
	{
		s[i] = b;
	}
	return (s);
}
