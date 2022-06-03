#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The main Function
 * Return: 0
 */
int main(void)
{
	char a, b, c;

	b = 'e';
	c = 'q';

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != b && a != c)
			putchar(a);
	}
	printf("\n");
	return (0);
}
