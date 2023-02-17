#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the english alphabets in lower
 * and uppercase
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	size_t i;

	for (i = 0; i < strlen(alphabets); i++)
	{
		putchar(alphabets[i]);
	}

	return (0);
}
