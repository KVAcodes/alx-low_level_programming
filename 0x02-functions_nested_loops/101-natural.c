#include <stdio.h>
/**
 * main - calculates and prints the sum of all the multiples of
 * 3 or 5 which are below 1024
 * Return: void
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 1024; x++)
		if (x % 3 == 0 || x % 5 == 0)
			y += x;
	printf("%d\n", y);
	return (0);
}


