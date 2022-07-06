#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: the operator argument passed into the program
 * Return: a pointer to the function that corresponds to
 * the operator given as a paramter or NULL if s doesnt match
 */
int (*get_op_func(char *s))(int, int)
{
	int var1;

	char *test = "+-*/%";
	int (*funcPntArr[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	var1 = 0;
	while (test[var1] != 0)
	{
		if (s[0] == test[var1])
		{
			return (funcPntArr[var1]);
		}
		var1++;
	}
	return (NULL);
}
