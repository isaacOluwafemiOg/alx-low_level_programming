#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string input
 * @src: string to be added to first string
 * Return: returns the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *v;

	v = dest;

	while (*v != '\0')
	{
		v++;
	}

	while (*src != '\0')
	{
		*v++ = *src++;
	}

	*v = '\0';

	return (dest);
}
