#include <stdio.h>
#include <unistd.h>
/**
 * main - This is the main function and entry point
 * Return:1
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, ch, sizeof(ch));
	return (1);
}
