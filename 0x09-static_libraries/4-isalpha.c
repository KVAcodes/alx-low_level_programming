#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: c is of type int
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
