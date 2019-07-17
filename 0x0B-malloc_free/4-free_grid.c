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
	int j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
		}
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}
}
