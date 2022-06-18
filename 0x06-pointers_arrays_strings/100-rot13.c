#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @str: the  string to encode
 * Return: address of s
 */
char *rot13(char *str)
{
	int x, y;
	char testarray1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char testarray2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
