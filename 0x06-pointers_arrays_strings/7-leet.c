#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1331
 * @str: the string to encode
 *
 * Return: the encode string
 */
char *leet(char *str)
{
	int x, y;

	char testarray1[] = "aAeEoOtTlL";
	char testarray2[] = "4433007711";

	for (x = 0; str[x] != 0; x++)
	{
		for (y = 0; testarray1[y] != 0; y++)
		{
			if (str[x] == testarray1[y])
			{
				str[x] = testarray2[y];
				break;
			}
		}
	}
	return (str);
}
