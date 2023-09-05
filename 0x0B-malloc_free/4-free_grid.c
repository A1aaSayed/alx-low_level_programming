#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 D grid
 * @grid: the grid
 * @height: height of the grid
 * Return:
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
