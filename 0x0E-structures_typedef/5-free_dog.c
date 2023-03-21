#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees a dog structure
 * @d: dog structure input
 *
 * Return: Nothing;
 */

void free_dog(dog_t *d)
{
	float *p;
	
	p = &(d->age);
	free(d->name);
	d->name = NULL;
	free(p);
	p = NULL;

	free(d->owner);
	d->owner = NULL;
	free(d);
	d = NULL;
}
