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

	nname = malloc(strlen(name) + 1);
	if (nname == NULL)
	{
		return (NULL);
	}
	nowner = malloc(strlen(owner) + 1);
	if (nowner == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dog_t));

	strcpy(nname, name);
	strcpy(nowner, owner);
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = nname;
	new->age = age;
	new->owner = nowner;

	return (new);
}
