#include "main.h"

/**
 * power - does x raised to the power of y
 * @x: base
 * @y: index or power
 *
 * Return: x ^ y
 */
int power(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * power(x, y - 1));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int var1, var2, len;
	unsigned int uIntValue;

	if (b == NULL)
	{
		return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
	}
	uIntValue = 0;
	var2 = 0;
	for (var1 = len - 1; var1 >= 0; var1--)
	{
		if (b[var2] != '0' && b[var2] != '1')
		{
			return (0);
		}
		uIntValue += ((b[var2] - '0') * (unsigned int)power(2, var1));
		var2++;
	}
	return (uIntValue);
}
