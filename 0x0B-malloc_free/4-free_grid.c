#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D grid
 * @grid: grid to free
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
		free(grid[p]);
	free(grid);
}
