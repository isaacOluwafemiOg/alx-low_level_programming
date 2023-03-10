#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string in which to search for the first occurence
 * @accept: the string from which a character in s must match
 *
 * Return: pointer to the byte in s that matches a byte in accept else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *v;
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	if (i == strlen(s) && j == strlen(accept))
	{
		v = 0;
	}
	return (v);
}
