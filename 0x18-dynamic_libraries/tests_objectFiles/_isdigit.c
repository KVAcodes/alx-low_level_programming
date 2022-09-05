#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digti
 * @c: c is int type
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
