#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_puts_recursion(s + 1);
	}
}
