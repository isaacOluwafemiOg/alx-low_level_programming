#include <stdio.h>


/**
 * main - entry to program that prints all arguments it receives
 * @argc: number of arguments passed to main
 * @argv: argument vector
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
