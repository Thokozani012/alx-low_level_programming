#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - Copies n bytes from 'src' mem to 'dest' mem
 * @dest: Memory area to be copied to
 * @src: Memory are to copy from
 * @n: The amount to copy from memory area
 *
 * Return: A pointer to the new memroy area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _realloc - Reallocates a memory bloack/area
 * @ptr: Pointer to the previous memory block/area
 * @old_size: Size of the old memory block/area
 * @new_size: Size of what the new memory block should be
 *
 * Return: A pointer to the reallocated memory bloc/area
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size;
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(sizeof(unsigned int) * new_size));
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	min_size = new_size > old_size ? new_size : old_size;

	new_ptr = malloc(sizeof(unsigned int) * new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	new_ptr = _memcpy(new_ptr, ptr, min_size);

	free(ptr);
	return (new_ptr);
}

