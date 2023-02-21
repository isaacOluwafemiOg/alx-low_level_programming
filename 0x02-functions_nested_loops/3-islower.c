#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks whether an input value is lowercase or not
 *
 * Return: returns 1 when the input is lowercase and 0 if otherwise
 *
 */

int _islower(int c)
{
	int res;

	if (islower(c))
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
