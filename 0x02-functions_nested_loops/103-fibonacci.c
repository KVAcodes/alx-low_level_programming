#include <stdio.h>
/**
 * main - sum even fibonacci numbers under 4 million.
 * Return: void
 */
int main(void)
{
	unsigned long x, a, b, c, sum;

	a = sum = 0;
	b = 1;
	for (x = 0; x < 50; x++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
		{
			sum += c;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
