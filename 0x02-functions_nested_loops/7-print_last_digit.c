#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - aprints the last digit of a number
 * @x: abs is of int type
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	int lastdigit;

	lastdigit = x % 10;

	if (lastdigit > 0)
		printf("%d", lastdigit);
	else
		printf("%d", lastdigit + (-2 * lastdigit));
	return (lastdigit);
}
