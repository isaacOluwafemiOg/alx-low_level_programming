#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>



/**
 * next_step - subfunction to put divided words into a single array
 * @q: array showing size of each word in the full string
 * @c: number of words in the string
 * @r: position of the start of each word
 * @str: string to split
 * Return: pointer to the array of split words
 */

char **next_step(int *q, int c, int *r, char *str)
{
	char **v;
	int j, i, s;
	int *u;

	printf("c is %d\n", c);

	v = malloc(sizeof(u) * c);
	if (v == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		v[i] = (char *)malloc(q[i]);
		if (v[i] == NULL)
		{
			return (NULL);
		}
		j = 0;
		s = r[i];
		while (str[s] != ' ')
		{
			v[i][j] = str[s];
			s++;
			j++;
		}
		v[i][j] = '\0';
	}
	return (v);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **v;
	int *q;
	int *r;
	unsigned int c, i;
	char w;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	c = 0;
	q = malloc(sizeof(int) * (strlen(str) / 2));
	if (q == NULL)
	{
		return (NULL);
	}
	r = malloc(sizeof(int) * (strlen(str) / 2));
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		w = str[i];
		if ((c == 0 && w != ' ') || (i != 0 && w != ' ' && str[i - 1] == ' '))
		{
			r[c] = i;
			c++;
			while (str[i] != ' ')
			{
				i++;
			}
			q[c - 1] = i - r[c];
		}
	}


	v = next_step(q, c, r, str);

	return (v);
}
