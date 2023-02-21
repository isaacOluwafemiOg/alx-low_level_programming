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
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
