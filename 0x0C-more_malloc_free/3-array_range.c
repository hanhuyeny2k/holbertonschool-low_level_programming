#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - main entry
 * @min: minimum value
 * @max: maximum value
 *
 *Description: create an array of integers between minimum and maximum
 * Return: pointer a
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if ( min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
