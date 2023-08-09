#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array of int's
 * @width: Grid width
 * @height: Grid height
 *
 * Return: Pointer, or NULL when width || height <= 0
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **ptr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(ptr[k]);
			}
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
