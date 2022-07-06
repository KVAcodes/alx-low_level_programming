#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a passed function on each element of an array
 * @array: The array of integers
 * @size: size of the array
 * @action: passed function or address of a function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int var1;

	if (action)
	{
		for (var1 = 0; var1 < size; var1++)
		{
			action(array[var1]);
		}
	}
}
