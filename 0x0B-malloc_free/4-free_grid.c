#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2D allocated memory
 *
 * @grid - the 2D grid
 * @height - the height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height);
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
