#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - main entry
 * @width: value given for column
 * @height: value given for row
 *
 *Description: return a pointer to a 2D array of integers
 * Return: pointer a
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **a = NULL;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
