#include <stdio.hd>

/**
 * get_op_func - selects correct function to perform an operation
 *
 *
 * Return: pointer to the function that corresponds to given operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	
	if (op
	return (ops[i])
}
