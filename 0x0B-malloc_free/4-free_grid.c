#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - main entry
 * @grid: double pointer to 2d arrays
 * @height: value given
 *
 *Description: free a 2D grid previously created by alloc_grid function
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
