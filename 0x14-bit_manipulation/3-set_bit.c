#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * to 1
 * @n: an integer value to be operated on bitwise
 * @index: the position of the bit starting from 0
 * (left to right)
 *
 * Return: 1 if it works, or -1 of an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n >>= index;
	if ((*n & 1) == 1)
	{
		*n <<= index;
		return (1);
	}
	*n += 1;
	*n <<= index;
	return (1);
}
