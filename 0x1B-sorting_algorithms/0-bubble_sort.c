#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;

	for (i = size; i > 1; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
