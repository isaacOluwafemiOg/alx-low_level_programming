#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: destination memory
 * @src: source memory area to coyp n bytes
 * @n: number of bytes in src to copy
 *
 * Return: returns the pointer to the destination memory address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

