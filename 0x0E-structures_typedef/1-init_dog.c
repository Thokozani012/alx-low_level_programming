#include "dog.h"
#include <stdio.h>

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
