#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, d, x, y;
	char *new;

	c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != 0; y++)
		{
		}
	}
	a = y + ac;
	new = malloc(a * sizeof(int));
	if (new == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < ac; b++)
	{
		for (d = 0; *(*(av + b) + d) != 0; d++)
		{
			*(new + c) = *(*(av + b) + d);
			c++;
		}
		*(new + c) = '\n';
		c++;
	}
	return (new);
}

