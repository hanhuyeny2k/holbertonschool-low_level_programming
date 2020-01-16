#include "search_algos.h"
/**
 * binary_search - search for a value in a sorted array of intergers.
 * @array: A pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (right + left) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
