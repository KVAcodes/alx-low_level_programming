#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an specified byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int var1;
	void *s;
	char *sForZeroing;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	sForZeroing = s;
	for (var1 = 0; var1 < nmemb * size; var1++)
	{
		sForZeroing[var1] = '\0';
	}
	return (s);
}
