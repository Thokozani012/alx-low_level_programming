#include <stdio.h>
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
