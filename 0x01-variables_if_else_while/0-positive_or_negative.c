#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *This program generates random numbers and checks if
 *they are positive, negative or equal to zero
 */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	if (n < 0)
	{
		printf("%d is negative\n");
	}
	else
	{
		printf("%d is zero\n")
	return (0);
}
