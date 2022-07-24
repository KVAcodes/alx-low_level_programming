#include "main.h"
/**
 * get_endianness - retunrs the endian of the processor
 *
 * Return: 1 for little and 0 for big
 */

int get_endianness(void)
{
	unsigned int i = 1;

	return ((((char *)&i)[0]));
}
