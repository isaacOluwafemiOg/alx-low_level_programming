#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: pointer to array of pointers
 *
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i;
	unsigned int j, k, l;
	char *v;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = 0; i < ac; i++)
	{
		j += strlen(av[i]);
	}

	v = malloc(j + 1 + (unsigned int)ac);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		l = 0;
		while (l < strlen(av[i]))
		{
			v[k] = av[i][l];
			k++;
			l++;
		}
		v[k] = '\n';
		k++;
	}
	v[k] = '\0';
	return (v);
}

