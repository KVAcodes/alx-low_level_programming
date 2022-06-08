#include <stdio.h>
#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @x: x is of int type
 * Return: the absolute value of ab
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (x + (-2 * x));
	else
		return (x);

}
