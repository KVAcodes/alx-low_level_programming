#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: a pointer to string str
 */
char *cap_string(char *str)
{
	int i, x;

	char testarray[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			     '"', '(', ')', '{', '}'};
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] -= 32;
		}
		for (x = 0; x <= 12; x++)
		{
			if ((str[i] == testarray[x]) && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
