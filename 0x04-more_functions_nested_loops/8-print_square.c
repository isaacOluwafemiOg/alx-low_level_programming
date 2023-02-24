#include <stdio.h>
#include "main.h"
/**
 * print_square - draws a square using pound characters
 * @size: the input indicating breadth and width of square
 *
 */

void print_square(int size)
{
	int i, j;


	for (i = 0; i < size; i++)
	{

		for (j = 0; j < size; j++)
		{
			putchar('#');
		}

		putchar('\n');
	}

	putchar('\n');

}
