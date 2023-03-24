#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - entry to main program
 * @argc - number of arguments
 * @argv - pointer to array of arguments
 *
 * Return: result of a simple arithmetic operation on two numbers
 */

int main(int argc, char *argv[])
{
	op_t w;
	int u, v;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	u = atoi(argv[1]);
	v = atoi(argv[3]);

	
