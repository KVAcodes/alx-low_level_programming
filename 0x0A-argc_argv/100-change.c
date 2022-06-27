#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * aidMethod - aids main
 * @modValue: modulus values
 * @divValue: division values
 * Return: amountOfCoins
 */
int aidMethod(int modValue, int divValue)
{
	int amountOfCoins = 0;
	if (divValue > 0)
	{
		amountOfCoins += divValue;
	}
	divValue = modValue / 10;
	modValue = modValue % 10;
	if (divValue > 0)
	{
		amountOfCoins += divValue;
	}
	divValue = modValue / 5;
	modValue = modValue % 5;
	if (divValue > 0)
	{
		amountOfCoins += divValue;
	}
	divValue = modValue / 2;
	modValue = modValue % 2;
	if (divValue > 0)
	{
		amountOfCoins += divValue;
	}
	divValue = modValue / 1;
	modValue = modValue % 1;
	if (divValue > 0)
	{
		amountOfCoins += divValue;
	}
	return (amountOfCoins);
}
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of commandline arguments.
 * @argv: pointer to an array of commmand line arguments.
 * Return: 0-success, non-zero-fail.
 */
int main(int argc, char *argv[])
{
	int cents, modValue, divValue;

	int amountOfCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("%d\n", 0);
		}
		else if (cents == 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			modValue = cents % 25;
			divValue = cents / 25;
			amountOfCoins = aidMethod(modValue, divValue);
		}
	}
	printf("%d\n", amountOfCoins);
	return (0);
}
