#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to be allocated
 *
 * Return: Nothing (void function)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr =  malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
