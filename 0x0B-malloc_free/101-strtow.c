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
	unsigned int c, i, s;
	int t, j;
	
	printf("very beginning");
	c = 0;
	q = malloc(sizeof(int) * (strlen(str) / 2));
	r = malloc(sizeof(int) * (strlen(str) / 2));

	printf("beginning");
	for (i = 0; i < strlen(str); i++)
	{
		if (c == 0 && str[i] != ' ')
		{

			r[c] = i;
			printf("first one occurs: %d\n", r[c]);
			t = 1;
			c++;
			while ((str[i + 1] != ' ') && (i + 1 != strlen(str)))
			{
				t++;
				i++;
			}
			q[c-1] = t;
			printf("size of first: %d\n", q[c-1]);

		}
		else if (str[i] != ' ' && str[i-1] == ' ')
		{
			r[c] = i;
			t = 1;
			c++;
			while ((str[i + 1] != ' ') && (i + 1 != strlen(str)))
			{
				t++;
				i++;
			}
			q[c-1] = t;
		}
	}
	v = malloc(sizeof(u) * c);
	
	for (i = 0; i < c; i++)
	{
		v[i] = (char *)malloc(q[i] + 1);
		j = 0;
		s = r[i];
		while (j < q[i] + 1)
		{
			v[i][j] = str[s];
			s++;
			j++;
		}
		v[j] = '\0';
	}
	return (v);
}

