#include <stdio.h>
#include "main.h"
/**
 * print_triangle - draws a triangle using a number of pounds
 * @size: the input
 *
 */

void print_triangle(int size)
{
	int i, j, k, l;

	i = size;
	j = 1;

	while (i > 0)
	{
		for (k = size - j; k > 0; k--)
		{
			putchar(' ');
		}
		for (l = 0; l < j; l++)
		{
			putchar('#');
		}
		i--;
		j++;
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
