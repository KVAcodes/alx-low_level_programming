#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: input string
 * Return: a pointer to the updated string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		else
		{
			continue;
		}
	}
	return (str);
}

