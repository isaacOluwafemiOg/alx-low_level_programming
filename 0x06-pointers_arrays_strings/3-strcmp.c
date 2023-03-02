#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two input strings
 * @s1: first string to compare
 * @s2: second string to compare with
 *
 * Return: returns 15 if s1 >s2, -15 if s1 < s2, else 0
 */

int _strcmp(char *s1, char *s2)
{
	size_t count;
	char *s11;
	count = 0;

	s11 = s1;
	while (count < strlen(s11))
	{
		if (*s1++ < *s2++)
		{
			return (-15);
		}
		else if (*s1++ > *s2++)
		{
			return (15);
		}
		count++;
	}
	if (*s1++ == *s2++)
	{
		return (0);
	}
	else
	{
		return (-15);
	}
}
