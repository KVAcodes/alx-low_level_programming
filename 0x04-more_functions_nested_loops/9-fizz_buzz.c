#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of Program
 * Return: 0 Always
 */
int main(void)
{
	int main(void)
	{
		int i;

		for (i = 1; i <= 100; i++)
		{
			if ((i % 5) == 0 && (i % 3) == 0)
				printf("FizzBuzz");
			else if ((i % 5) == 0)
				printf("Buzz");
			else if ((i % 3) == 0)
				printf("Fizz");
			else
				printf("%d", i);
			printf("%s", i < 100 ? " " : "");
		}
		printf("\n");

		return (0);
	}
}
