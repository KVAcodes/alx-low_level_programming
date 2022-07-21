#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 to 1
 * @n: an integer value to be operated on bitwise
 * @index: the position of the bit starting from 0
 * (left to right)
 *
 * Return: 1 if it works, or -1 of an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int var1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	for (var1 = 0; var1 < index; var1++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
