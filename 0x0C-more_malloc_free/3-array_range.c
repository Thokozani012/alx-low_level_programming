#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers
 * @min: Smallest element of the array
 * @max: Largest element of teh array
 *
 * Return: Pointer to the newly created array,
 * NULL if min > max, and NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int i;
	int size = (max - min) + 1;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
