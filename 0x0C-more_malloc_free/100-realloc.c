#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: is the new size in bytes of tha new memory block
 *
 * Return: NULL if new_size is zero or if malloc fails or a pointer
 * to th new block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int var1;
	char *helperArr, *tmpArr;

	helperArr = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	tmpArr = malloc(new_size);
	if (tmpArr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (var1 = 0; var1 < new_size && var1 < old_size; var1++)
	{
		tmpArr[var1] = helperArr[var1];
	}
	free(ptr);
	return (tmpArr);
}
