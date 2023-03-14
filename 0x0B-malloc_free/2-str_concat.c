#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *v;
	unsigned int i, j, k;

	i = strlen(s1) + strlen(s2) + 1;
	v = malloc(i);
	if (v == NULL)
	{
		return (NULL);
	}
	else
	{
		j = 0;
		while (s1[j] != '\0')
		{
			v[j] = s1[j];
			j++;
		}
		k = 0;
		while (s2[k] != '\0')
		{
			v[j] = s2[k];
			j++;
			k++;
		}
		v[j] = '\0';
	}
	return (v);
}
