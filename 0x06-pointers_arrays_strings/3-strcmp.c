#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two stings
 * @s1: first string or pointer to string
 * @s2: second string or pointer to string
 *
 * Return: (s1[0] - s2[0] or 0 if s1[0] == s2[0]
 */
int _strcmp(char *s1, char *s2)
{
	return (s1[0] - s2[0]);
}
