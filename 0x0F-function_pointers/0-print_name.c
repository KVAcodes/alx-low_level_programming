#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - This prints a name
 * @name: The name to be printed
 * @f: a function pointer to a function that returns nothing and takes in a string
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

