#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks if an input is an uppercase letter
 *
 * c: the input
 *
 * Return: returns 1 if uppercase else 0
 */

int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
