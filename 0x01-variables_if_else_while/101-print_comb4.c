#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The main Function
 * Return: 0
 */
int main(void)
{
	int x, y, z = 48;

	for (x = 48; x <= 57; x++)
	{
		for(y = 48; y <= 57; y++)
			for(z = 48; z <= 57; z++)
			{
				if ((x != y && y != z) && (x < y && y < z))
				{
					putchar(x);
					putchar(y);
					putchar(z);
				}
				if ((x != y && y != z) && (x < y && y < z) && x != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);

}
