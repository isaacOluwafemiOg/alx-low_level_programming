#include <stdio.h>
/**
 * digitnum - get number of digits in integer
 *
 * @v: input integer
 * Return: returns number of digit in integer
 */
int digitnum(int v)
{
	int count;

	if (v == 0)
	{
		return (1);
	}

	count = 0;
	while (v != 0)
	{
		v = v / 10;
		count++;
	}

	return (count);
}

/**
 * print_number - print any integer using putchar
 *
 * @n: the input integer
 */

void print_number(int n)
{
	int i, j, new;

	j = digitnum(n);

	if (n < 0)
	{
		putchar('-');
		n = n * -1;
	}
	while (j > 1)
	{
		new = n;
		for (i = 1; i < j; i++)
		{
			new = new / 10;
		}
		new = new % 10;
		putchar(new + '0');
		j--;
	}
	putchar(n % 10 + '0');
	putchar('\n');
}
