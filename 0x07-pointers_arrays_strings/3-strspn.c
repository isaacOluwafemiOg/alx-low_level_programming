#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - check the number of occurences of accept chars in s
 * @s: the string to check for matches in
 * @accept: the string which chars in s must mathc to be counted
 *
 * Return: number of bytes in the initial segment of s contained in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;
	unsigned int j;

	j = 0;
	for (i = 0; i < strlen(accept); i++)
	{
		k = 0;
		while (s[k] != ' ')
		{
			if (accept[i] == s[k])
			{
				j++;
			}
			k++;
		}
	}
	return (j);
}

