#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates a substring in a larger string
 * @haystack: the larger string in which to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the start of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;
	char *v;

	for (i = 0; i < strlen(haystack); i++)
	{
		if (haystack[i] == needle[0])
		{
			j = i;
			for (k = 1; k < strlen(needle); k++)
			{
				if (haystack[i + k] != needle[k])
				{
					break;
				}
			}
			if (k == strlen(needle))
			{
				return (&(haystack[j]));
			}
		}
	}
	v = 0;
	return (NULL);
}
