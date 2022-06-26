#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
 * main - prints the no arguments passed into it
 * @argc: no of arguments
 * @argv: array of string arguments
 * Return: 0 always a success
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc);
	return (0);
}
