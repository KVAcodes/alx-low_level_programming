#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the number arguments
 * @separator: the string to be printed between numbers
 * @n: number of arguments to be printed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int var1;
	va_list numbersList;

	va_start(numbersList, n);
	for (var1 = 0; var1 < n; var1++)
	{
		printf("%d", va_arg(numbersList, int));
		if (separator != NULL && var1 != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
