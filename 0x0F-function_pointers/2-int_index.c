#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - main entry
 *@array: given array of integers
 *@size: size of the array
 *@cmp: function pointer
 *
 * Return: return -1 when fail otherwise return an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
