#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type 'struct dog'
 * @d: pointer to the initial values
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: Nothing (void function)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
