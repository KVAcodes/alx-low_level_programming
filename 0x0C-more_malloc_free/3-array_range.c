#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, min and maxinclusive.
 * @min: The first int value in the array.
 * @max: The last int value in the array.
 *
 * Return: If min > max or the function fails - NULL
 * Otherwise - a pointer to the newly created array
 * of integers.
 */
int *array_range(int min, int max)
{
	int var1, var2;
	int *intArr;

	var1 = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	intArr = malloc(var1  * sizeof(int));
	if (intArr == NULL)
	{
		return (NULL);
	}
	for (var2 = 0; var2 < var1; var2++)
	{
		intArr[var2] = min++;
	}
	return (intArr);
}
