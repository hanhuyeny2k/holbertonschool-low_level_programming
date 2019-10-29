#include "sort.h"
/**
 * partition - a block of number that uses partition to sort.
 *
 * @A: The array to be printed
 * @size: Number of elements in @array
 * @start: the starting of the array
 * @end: the ending of the array
 *
 * Return: the index of the partition
 */

int partition(int *A, size_t size, int start, int end)
{
	int pivot = A[end];
	int pIndex = start;
	int temp;
	int i;

	for (i = start; i < end; i++)
	{
		if (A[i] < pivot)
		{
			if (pIndex != i)
			{
				temp = A[i];
				A[i] = A[pIndex];
				A[pIndex] = temp;
				print_array(A, size);
			}
			pIndex++;
		}
	}
	if (pivot < A[pIndex])
	{
		temp = A[pIndex];
		A[pIndex] = A[end];
		A[end] = temp;
		print_array(A, size);
	}
	return (pIndex);
}
/**
 * recursion_quick_sort - helper recursive function.
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @start: starting of the array
 * @end: ending of the array
 */

void recursion_quick_sort(int *array, size_t size, int start, int end)
{
	int pIndex;

	if (start < end)
	{
		pIndex = partition(array, size, start, end);
		recursion_quick_sort(array, size, start, pIndex - 1);
		recursion_quick_sort(array, size, pIndex + 1, end);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *                  using Quick sort.
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	recursion_quick_sort(array, size, 0, size - 1);
}
