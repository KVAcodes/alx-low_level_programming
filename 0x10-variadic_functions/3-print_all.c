#include <stdio.h>

#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - prints a char
 * @allForOne: the character
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_int - prints an integer
 * @allForOne: the integer
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_float - prints a float
 * @allForOne: the float
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_string - prints a string
 * @allForOne: the string
 */
void print_string(va_list s)
{
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
	printf("%s", va_arg(s, char *));
	}
}
/**
 * print_all - prints of anything or any type
 * @format: a list of types of arguments passed to the function
 *
 * Return (0);
 */
void print_all(const char * const format, ...)
{
	int var1, var2;
	va_list allForOne;
	char *separator = "";

	match matcharr[] = {
				{'c', print_char},
				{'i', print_int},
				{'f', print_float},
				{'s', print_string},
				};

	va_start(allForOne, format);

	var1 = 0;

	while (format[var1])
	{
		var2 = 0;
		while (var2 < 4)
		{
			if (format[var1] == matcharr[var2].c)
			{
				printf("%s", separator);
				matcharr[var2].ptr(allForOne);
				separator = ", ";
			}
			var2++;
		}
		var1++;
	}
	printf("\n");
	va_end(allForOne);
}

