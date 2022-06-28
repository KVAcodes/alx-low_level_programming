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
	int i, x;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
	}
	new = malloc((x + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		*(new + i) = *(str + i);
	}
	*(new + i) = 0;
	return (new);
}

