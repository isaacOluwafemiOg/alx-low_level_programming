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

	j = strlen(str);

	v = malloc(j + 1);
	if (v == NULL || str == NULL)
	{
		printf("failed to allocate memory");
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
