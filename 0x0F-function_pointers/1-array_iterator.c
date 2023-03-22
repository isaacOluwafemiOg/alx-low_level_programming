#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes an input function on each array element
 * @array: the array on whose elements the function will be executed
 * @size: size of the array
 * @action: pointer to the function that will be executed
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
