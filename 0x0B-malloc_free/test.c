#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	char *str = "Holberton";
	for (i = 0; str[i]; i++);
	printf("%ld\n", * sizeof(char));
	return (0);
}
