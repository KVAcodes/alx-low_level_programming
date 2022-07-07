#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int var1;
	char *s;
	va_list stringsList;

	va_start(stringsList, n);
	for (var1 = 0; var1 < n; var1++)
	{
		s = va_arg(stringsList, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && var1 != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
