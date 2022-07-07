#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: no of args
 * Return: the sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int var1;
	int sum;

	va_start(args, n);
	sum = 0;
	for (var1 = 0; var1 < n; var1++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
