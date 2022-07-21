#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: an integer value to be operated on bitwise
 * @index: the position of the bit starting from 0
 * (left to right)
 *
 * Return: the value of the bit at the index given or
 * -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int var1;

	for (var1 = 0; var1 < index; var1++)
	{
		n = n >> 1;
		if (n == 0)
		{
			return (-1);
		}
	}
	return (n & 1);
}
