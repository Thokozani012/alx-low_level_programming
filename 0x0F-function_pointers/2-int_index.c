#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to be checked
 * @size: Size of teh array
 * @cmp: Pointer to the function that searches the array
 *
 * Return: An index if the array has an integer, -1 if size<=0 and otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
