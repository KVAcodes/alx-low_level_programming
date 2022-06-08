#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: void
 */
int main(void)
{
	unsigned long x, a, b, c;

	a = 0;
	b = 1;
	for (x = 0; x < 50; x++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (x == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}


