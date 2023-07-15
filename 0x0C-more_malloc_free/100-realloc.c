#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:  Pointer
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 *
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *new_ptr;

	if (new_size <= old_size)
	{
		memset(ptr, 0, new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(sizeof(unsigned int) * new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		copy_size = (old_size < new_size) ? old_size : new_size;
		memcpy(new_ptr, ptr, copy_size);
	}

	free(ptr);
	return (new_ptr);
}
