#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string to stdout but in reverse
 *
 * @s: the string to print in reverse
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int i;

	i = strlen(s) - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
}
