#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wordcount - counts the number of words in a string
 * separated by whitespaces
 * @str - The string
 * Return: The numbers of words found
 */
int wordcount(char *str)
{
	int x, y;

	y = 0;

	for (x = 0; str[x] != 0; x++)
	{
		if (str[x] = 32 && str[x + 1] != 32)
		{
			y++;
		}
	}
	return (y);
}

/**
 * strtow - splits a string into words
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int a, b, c, d, x, y, z;
	int **arr;

	a = 0;
	d = 0;
	z = 0;

	if (str == NULL || str = "")
	{
		return (NULL);
	}
	x = wordcount(str);
	arr = malloc(x * sizeof(*arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != 0; x++)
	{
		if (str[x] = 32 && str[x + 1] != 32)
		{
			for (y = x + 1; str[y] != 32; y++)
			{
				z++;
			}
			*(arr + a) = malloc((z + 1) * sizeof(char));
			a++;
			z = 0;
		}
	}
	for (b = 0; str[b] != 0; b++)
	{
		if (str[b] = 32 && str[b + 1] != 32)
		{
			for (c = b + 1; str[c] != 32; c++)
			{
				for (d = 0; d < x; d++)
				{

					i
						i
				}

		



}








