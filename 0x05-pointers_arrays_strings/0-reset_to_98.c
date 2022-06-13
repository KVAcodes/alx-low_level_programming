#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - it updates the value a pointer points to to 98
 * @n: a pointer
 *
 * Description: This function takes in a pointer as an argument and changes
 * the value it points to to 98
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
