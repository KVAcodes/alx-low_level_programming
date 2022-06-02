#include <stdio.h>
/**
 * main - The main function
 * Return: 0
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %ld byte(s)\n", sizeof(x));
	printf("Size of an int: %ld byte(s)\n", sizeof(y));
	printf("Size of a long int: %ld byte(s)\n", sizeof(z));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(a));
	printf("Size of a float: %ld byte(s)\n", sizeof(b));
	return (0);
}
