#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **v;
	char *u;
	int *q;
	int *r;
	unsigned int c, i, s, j;
	char w;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	c = 0;
	q = malloc(sizeof(int) * (strlen(str) / 2));
	r = malloc(sizeof(int) * (strlen(str) / 2));
	for (i = 0; i < strlen(str); i++)
	{
		w = str[i];
		if ((c == 0 && w != ' ') || (w != ' ' && str[i - 1] == ' '))
		{
			r[c] = i;
			c++;
		}
	}
	v = malloc(sizeof(u) * c);
	for (i = 0; i < c; i++)
	{
		v[i] = (char *)malloc(q[i] + 1);
		j = 0;
		s = r[i];
		while (str[s] != ' ')
		{
			v[i][j] = str[s];
			s++;
			j++;
		}
		v[j] = '\0';
	}
	return (v);
}
