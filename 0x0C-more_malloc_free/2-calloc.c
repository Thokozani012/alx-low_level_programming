#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array suing malloc
 * @nmemb: Number of elements in an array
 * @size: size of each element in an array
 *
 * Return: A pointer or Null otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *arr_ptr;

	if  (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	arr_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		arr_ptr[i] = 0;
	}

	return (ptr);
}
