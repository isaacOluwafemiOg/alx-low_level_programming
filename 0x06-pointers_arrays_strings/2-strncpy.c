#include <stdio.h>

/**
 * _strncpy - imitates strncpy of the standard library
 * @dest: first string input
 * @src: string input to copy into the beginning of dest
 * @n: number of bytes of the src string to copy
 *
 * Return: returns the result of copying n characters from src to the beginning of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *v;
	int count;

	v = dest;
	count = 0;

	while (count < n)
	{
		if (*src == '\0')
		{
			break;
		}
		*v++ = *src++;
		count++;
	}

	if (count < n)
	{
		while (count < n)
		{
			*v++ = '\0';
			count++;
		}
	}
	return (dest);
}
