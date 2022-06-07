#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The main Function
 * Return: 0
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x != 101 && x != 113)
			putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
