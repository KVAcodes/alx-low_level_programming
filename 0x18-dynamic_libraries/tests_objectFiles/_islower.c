#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: c is of int type
 * Return: 1 or 0
 */
int _islower(int c)
{
	int ret;

	if (c >= 97 && c <= 122)
		ret = 1;
	else
		ret = 0;
	return (ret);
}
