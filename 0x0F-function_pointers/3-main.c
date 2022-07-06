#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments (pointers)
 * Return: 0 on success and 98, 99, 100 on failure
 */
int main(int argc, char *argv[])
{
	int var1, var2;
	int (*p)(int, int);

	var1 = atoi(argv[1]);
	var2 = atoi(argv[3]);
	p = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*(argv[2]) == '/' && *(argv[3]) == '0') ||
	(*(argv[2]) == '%' && *(argv[3]) == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(var1, var2));
	return (0);
}
