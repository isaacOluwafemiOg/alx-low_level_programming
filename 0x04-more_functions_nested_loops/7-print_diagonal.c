#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal using a number of backslashes
 * @n: the input
 *
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n - 1)
	{
		putchar('\\');
		putchar('\n');
		for (j = 0; j <= i; j++)
		{
			putchar(' ');
		}
		i++;
	}
	if (n > 0)
	{
		putchar('\\');
	}

	putchar('\n');

}
