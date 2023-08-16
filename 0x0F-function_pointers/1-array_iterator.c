#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array from a function pointer
 * @array: Array of integers to be iterated
 * @size: The size of the array
 * @action: Function pointer that takes an int argument
 *
 * Return: Nothing (void function)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
