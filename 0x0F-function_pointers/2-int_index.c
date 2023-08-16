#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer and returns relevant index
 * @array: Array to be searched
 * @size: Size of the array
 * @cmp: Function pointer that takes an array as argument
 *
 * Return: On success, the first index in the array where the function
 * pointed to by @cmp return 1 (TRUE in boolean).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}

	return (-1);
}
