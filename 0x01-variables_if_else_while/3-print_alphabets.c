#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The main Function
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
