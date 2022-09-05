#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string taking in its pointer
 * @s: pointer to the string
 *
 * Return: the length of the string i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
