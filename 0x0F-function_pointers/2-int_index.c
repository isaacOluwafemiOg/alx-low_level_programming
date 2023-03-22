#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array in which to search for integer
 * @size: size of array
 * @cmp: poiter to function to be used to compare values
 *
 * Return: index of first element for which cmp doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int res;

	if (size <= 0)
	{
		return (-1);
	}
	res = -1;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (res);
}
