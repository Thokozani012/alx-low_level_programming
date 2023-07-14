#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using 'malloc'
 * @nmemb: number of elements/members
 * @size: Element size
 *
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(size * nmemb);

	if (s == NULL)
	{
		return (NULL);
	}
	if (s != NULL)
	{
		memset(s, 0, size * nmemb);
	}

	return (s);
}
