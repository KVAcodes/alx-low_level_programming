#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This Function main Prints the last digit of a randomly
 * generated number and states if the last digit is either greater
 * than 5, is 0, less than and not is not 0
 * Return: 0
 */
int main(void)
{
	int n;

	int x;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;

	if (x > 5)
		printf("Last digit of %d is %d and greater than 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	else if (x < 6 && x != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	else
		printf("Error404\n");
	return (0);

}
