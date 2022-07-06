#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer within an array
 * @array: an array of integers to be searched
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used compare values
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0 and -1 if no element matches or size is less than
 * or equal to zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int var1;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp && array)
	{
		for (var1 = 0; var1 < size; var1++)
		{
			if (cmp(array[var1]))
			{
				return (var1);
			}
		}
	}
	return (-1);
}
