#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to the structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog's owner's name
 *
 * Return: Nothing (void function)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name != NULL)
	{
		strcpy(d->name, name);
	}
	else
	{
		exit(98);
	}

	d->age = age;

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner != NULL)
	{
		strcpy(d->owner, owner);
	}
	else
	{
		exit(98);
	}
}
