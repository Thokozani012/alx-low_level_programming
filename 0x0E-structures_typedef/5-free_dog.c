#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees the memory allocated to dog_t
 * @d: Pointer structure to be freed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}

	free(d->name);
	free(d->owner);

	free(d);
}
