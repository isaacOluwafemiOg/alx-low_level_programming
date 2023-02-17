#include <stdio.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the english alphabets 
 *
 * Return: Always returns 0 (success)
 */

int main (void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(alphabets[i]);
	}

	return (0);
}
