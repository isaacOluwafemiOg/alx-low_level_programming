#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description: This program uses putchar to
 * print all the english alphabets with the
 * exception of "e" and "q"
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char alphabets[] = "abcdfghijklmnoprstuvwxyz\n";
	size_t i;

	for (i = 0; i < strlen(alphabets); i++)
	{
		putchar(alphabets[i]);
	}

	return (0);
}
