#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints the numbers 0 to 14 ten times followed by a new line
 *
 */

void more_numbers(void)
{
	int i, j;
	char my[] = {'0', '1', '3', '5', '6', '7', '8', '9', '1', '0', '1', '2', '1',\
		'3', '1', '4'};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
		{
			putchar(my[j]);
		}
		putchar('\n');
	}
}
