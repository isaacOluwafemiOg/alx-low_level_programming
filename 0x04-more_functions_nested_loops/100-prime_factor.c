#include <stdio.h>
/**
 * main - entry to program
 *
 * prime_check - finds out if an input is prime or not
 * @v: the input to prime_check
 * Return: returns 0 always
 */



int prime_check(int v)
{
	int x;

	for (x = 2; x < v; x++)
	{
		if (v % x == 0)
		{
			return (0);
		}
	}
	return (1);
}

int main(void)
{
	int i;
	long int j;

	j = 612852475143;
	while (i >= 0)
	{
		for (i = 2; i < j; i++)
		{
			if (j % i == 0 && prime_check(i) == 1)
			{
				j = j / i;
				break;
			}
		}
	}
	printf("%ld", j);

	return (0);
}

