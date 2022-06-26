#include <stdio.h>
#define UNUSED(argc) (void)(argc)
/**
 * main - prints its name
 * @argc: no of arguments
 * @argv: array of string arguments
 * Return: 0 always a success
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
