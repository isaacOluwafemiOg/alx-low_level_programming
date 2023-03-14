#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - creates a copy of string input
 * @str: string input to copy
 *
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
	char *v;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	j = strlen(str);

	v = malloc(j + 1);
	if (v == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < j)
	{
		v[i] = str[i];
		i++;
	}
	v[j] = '\0';

	return (v);
}
