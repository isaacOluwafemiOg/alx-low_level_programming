#include <stdio.h>
#include <stdlib.h>


/**
 * main - finds the minimum number of coins needed for a change
 * @argc: number of arguments passed to main
 * @argv: argument vector
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
	int u, i, j, v;
	const char *a;
	int deno[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = 0;
		a = argv[1];
		u = atoi(a);
		for (j = 0; j < 5; j++)
		{
			if (u / deno[j] >= 1)
			{
				v = u / deno[j];
				i += v;
				u -= v * deno[j];
			}
			if (u == 0)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return (0);
}
