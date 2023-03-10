#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value
 * 
 * n is the input parameter to the function
 * Return: returns absolute value of the input
 *
 */

int _abs(int n)
{
	int res;

	if (n < '0')
	{
		res = -1 * n;
	}
	else
	{
		res = n;
	}

	return (res);
}
