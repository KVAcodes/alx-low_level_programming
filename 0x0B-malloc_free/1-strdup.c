#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - retuens a pointer to a new string which id a duplicate
 * of the input string str
 * @str: input string to be duplicated
 * Return: a pointer to the duplicated string on success and NULL on
 * failure
 */
char *_strdup(char *str)
{
	int i;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(str));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(new + i) = *(str + i);
	}
	return (new);
}

