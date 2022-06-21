#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: a pointer to an array of 8 characters
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			printf("%c", a[x][y]);
		}
		printf("\n");
	}
}
