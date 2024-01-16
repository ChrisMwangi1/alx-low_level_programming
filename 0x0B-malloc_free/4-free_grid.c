#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees up memory allocated to grid.
 * @grid: 2 dimentional array
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
