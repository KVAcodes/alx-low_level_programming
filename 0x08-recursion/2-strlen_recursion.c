#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of the input string
 *  @s: input string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	length = _strlen_recursion(s + 1);
	return (length + 1);
}
