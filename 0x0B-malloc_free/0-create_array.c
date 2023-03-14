#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it.
 * @size: the size of the array
 * @c: the char to initialize with
 *
 * Return: a pointer to the created array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	char *v;
	unsigned int i;

	i = 0;
	v = malloc(size);
	if (v == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		v[i] = c;
		i++;
	}

	if (size == 0)
	{
		v = 0;
		return (v);
	}
	else
	{
		return (v);
	}
}

