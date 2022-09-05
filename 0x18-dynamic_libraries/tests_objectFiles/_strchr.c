#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character first occurrence in a string
 * @s: the string
 * @c: the character
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	/**
	 * The condition used in the for loop ensures that
	 * the address of s + i is returned even if one or more \0 characters
	 * are placed before the char c
	 */
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
