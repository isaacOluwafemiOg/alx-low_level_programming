#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string to stdout but in reverse
 *
 * @s: the string to print in reverse
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
