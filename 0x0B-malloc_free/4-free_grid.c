#include "main.h"

/**
 * free_grid - use free function on previous grid
 * @grid: 2 dim. array to free
 * @height: input height (size)
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
		grid[index] = NULL;
	}
	free(grid);
	grid = NULL;
}
