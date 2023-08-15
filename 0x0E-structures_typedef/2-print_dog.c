#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dog.h"

/**
 * print_dog - Prints the properties of a structure
 * @d: Structure to be printed
 *
 * Return: Nothing (void function)
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)");
		}

		if (!isnan(d->age))
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}
