#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid from alloc_grid
 * @grid: The 2D grid to be freed
 * @height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	while (n < height)
	{
		free(grid[n]);
		n++;
	}
	free(grid);
}
