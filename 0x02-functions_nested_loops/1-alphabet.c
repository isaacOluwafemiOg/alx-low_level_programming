#include <stdio.h>
#include "main.h"

/**
 *
 * main - entry point
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

int main(void)
{

	print_alphabet();
	return (0);
}