#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the contents of the struc input
 * @d: the input struct
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (&(d->age) == NULL)
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
