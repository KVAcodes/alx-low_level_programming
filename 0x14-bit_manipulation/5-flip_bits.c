#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var1, bitsFlipped = 0;

	unsigned int long xOr = n ^ m;

	for (var1 = 0; var1 < 64; var1++)
	{
		if ((xOr & 1) == 1)
		{
			bitsFlipped++;
		}
		xOr >>= 1;
	}
	return (bitsFlipped);
}
