#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: The pointer to the structure paramemeters
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
