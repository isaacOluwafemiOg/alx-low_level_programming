#include "main.h"
#include <stdio.h>

/**
 * _memset - sets firt n bytes of the address pointed by s to store b
 * @s: the pointer to the address
 * @b: the character to store in n bytes of the address
 * @n: the number of bytes
 *
 * Return: reaturn the result of the setting of n bytes of b to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
