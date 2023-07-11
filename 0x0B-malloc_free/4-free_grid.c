#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid from alloc_grid
 * @grid: address of the 2D grid
 * @height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	while (j< height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
