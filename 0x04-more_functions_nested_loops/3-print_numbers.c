#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints decimal digits followed by a new line
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
