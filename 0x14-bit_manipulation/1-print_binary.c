#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: a positive number to be converted.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	/* using recursion reverse loop */
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
