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
}

int main(void)
{
	void print_alphabet(void);

	print_alphabet();
	return (0);
}
