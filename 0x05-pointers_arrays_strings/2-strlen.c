#include <stdio.h>
#include "main.h"
/**
 * _strlen - calculates the lenght of a string.
 *
 * @s: the input string to the function
 * Return: returns nothing
 */

int _strlen(char *s)
{
	int i;


	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
