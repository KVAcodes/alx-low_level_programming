#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The main Function
 * Return: 0
 */
int main(void)
{
	int x = 48;
	int y = 48;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			if (x != y && x < y)
			{
				putchar(x);
				putchar(y);
			}
			if (x != y && x < y && x != 56)
			{
				putchar(',');
				putchar(' ');
			}
			
		}
		
	}
	putchar('\n');
	return (0);


}
