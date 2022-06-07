#include <stdio.h>
/**
 * _putcharPrinter -  prints putchar
 * Return: void
 */
void _putcharPrinter(void)
{
	printf("_putchar\n");
}
/**
 * main - Program's Entry point
 * Return: 0 Always
 */
int main(void)
{
	void _putcharPrinter(void);
	_putcharPrinter();
	return (0);
}
