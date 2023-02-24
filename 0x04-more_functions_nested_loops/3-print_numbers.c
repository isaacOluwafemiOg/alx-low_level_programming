#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints decimal digits followed by a new line
 *
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
