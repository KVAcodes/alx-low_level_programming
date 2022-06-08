#include <stdio.h>
#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: ab is of int type
 * Return: the absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
