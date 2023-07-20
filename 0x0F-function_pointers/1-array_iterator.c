#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * @array: The array of elements
 * @size: size of the array
 * @action: pointer to the array function
 * Return: Nothing (void function)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
