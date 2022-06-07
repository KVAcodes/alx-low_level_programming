#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The main Function prints a-z && A-Z
 * Return: 0
 */
int main(void)
{
	int x;
	for (x = 97; x <= 122; x++)
		putchar(x);
	for (x = 65; x <= 90; x++)
		putchar(x);
	putchar('\n');
	return (0);

}
