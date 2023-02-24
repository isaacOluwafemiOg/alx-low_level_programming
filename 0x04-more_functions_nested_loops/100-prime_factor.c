#include <stdio.h>
/**
 * prime_check - finds out if an input is prime or not
 *
 * @v: the input to prime_check
 *
 * Return: returns 0 if number is not prime otherwise 1
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

/**
 * main - entry to program
 *
 * Description: makes use of prime_check find largest prime factor
 * Return: returns 0 always
 */
int main(void)
{
	int i;
	long int j;

	j = 612852475143;
	for (i = 2; i < j; i++)
	{
		if (j % i == 0 && prime_check(i) == 1)
		{
			j = j / i;
		}
	}
	printf("%ld", j);
	putchar('\n');
	return (0);
}

