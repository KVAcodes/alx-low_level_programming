#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: no of arguments
 * @argv: array of string arguments
 * Return: 0 always a success
 */
int main(int argc, char *argv[])
{
	int i, res;

	res = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	return (0);
}
