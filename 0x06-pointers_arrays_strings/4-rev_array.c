#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses an array of integers
 * @a: input array of integers to be reversed
 * @n: size of the array of integers
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int *v;
	int p;

	n--;
	j = n;
	v = malloc(sizeof(n));
	for (i = 0; i <= j; i++)
	{
		v[i] = *(a+n);
		n--;
	}

	for (p = 0; p <= j; p++)
	{
		*a++ = v[p];
	}
}
