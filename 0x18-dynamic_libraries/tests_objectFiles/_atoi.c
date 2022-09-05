#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to integer.
 * @s: character value.
 *
 * Return: n.
 */
int _atoi(char *s)
{
	int x;
	int signabs = 1;
	double num = 0;

	for (x = 0; s[x] != 0; x++)
	{
		if (s[x] == '-')
		{
			signabs = -signabs;
		}
		if (!((s[x] >= '0') && (s[x] <= '9')))
		{
			continue;
		}
		else
		{
			num = (num * 10) + (s[x] - '0');
			if (!((s[x + 1] >= '0') && (s[x + 1] <= '9')))
			{
				break;
			}
		}
	}
	num = signabs * num;
	return (num);
}
