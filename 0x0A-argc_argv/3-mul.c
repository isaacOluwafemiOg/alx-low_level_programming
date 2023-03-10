#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry to program that multiplies arguments if they are two
 * @argc: number of arguments passed to main
 * @argv: argument vector
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
	int u;
	const char *a, *b;

	if (argc == 3)
	{
		a = argv[1];
		b = argv[2];
		u = atoi(a) * atoi(b);
		printf("%d\n", u);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
