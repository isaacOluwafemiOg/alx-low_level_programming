#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints decimal digits followed by a new line
 * with the execption of 2 and 4
 */

void print_numbers(void)
{
	int i;
	
	int my[] = {'0', '1', '3', '5', '6', '7', '8', '9'};
	for (i = 0; i < 8; i++)
	{
		putchar(my[i]);
	}
	putchar('\n');
}
