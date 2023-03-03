#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * string_toupper - converts letters in a string to uppercase
 * @v: input string
 * Return: returns the converted string
 */

char *string_toupper(char *v)
{
	char *u;
	char *w;
	int count, i;

	count = 0;
	u = v;

	while (*v != '\0')
	{
		*u++ = toupper(*v++);
		count++;
	}

	for (i = -1; i < count; i++)
	{
		*w++ = *(v + i);
	}

	return (w);
}
