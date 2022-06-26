#include <stdio.h>
#include <stdlib.h>
/**
 * IsaInteger - checks if a string is an integer in disguise
 * @str: string
 * Return: 0 if str is an integer and 1 if not
 */
int IsaInteger(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
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
			if (IsaInteger(argv[i]) == 0)
			{
				res += atoi(argv[i]);
			}
			else if (IsaInteger(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	return (0);
}
