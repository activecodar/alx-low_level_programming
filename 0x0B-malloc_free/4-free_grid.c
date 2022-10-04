#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory from grid
 * @grid: grid array pointer
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	{
		free(grid[idx]);
	}

}
