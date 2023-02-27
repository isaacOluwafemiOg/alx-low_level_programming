#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 *
 * @str: the input string to the function
 * Return: returns nothing
 */

void _puts(char *str)
{
	int i;


	i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
	}
	putchar('\n');
}
