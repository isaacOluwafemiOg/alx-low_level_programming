#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry to program that adds arguments together
 * @argc: number of arguments passed to main
 * @argv: argument vector
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
	int u, i;

	i = 1;
	u = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			if (atoi((const char *)argv[i]) < 0)
			{
				return (1);
			}
			u += atoi((const char *)argv[i]);
		}
		i++;
	}
	printf("%d\n", u);
	return (0);
}
