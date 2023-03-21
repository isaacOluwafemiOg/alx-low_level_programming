#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a dog_t type variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *nname;
	char *nowner;

	nname = malloc(strlen(name));
	if (nname == NULL)
	{
		return (NULL);
	}
	nowner = malloc(strlen(owner));
	if (nowner == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
