#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The main Function
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
		for (b = 48; b <= 57; b++)
			for (c = 48; c <= 57; c++)
				for (d = 48; d <= 57; d++)
				{
					if ((a = c && ((d + c) > (b + a))) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
					}
					/*if ((a != 57) && (b != 56))
					{
						putchar(',');
						putchar(' ');
					}*/
					
				}
	putchar('\n');
	return (0);

}
