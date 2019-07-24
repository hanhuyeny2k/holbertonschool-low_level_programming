#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - main entry
 *@array: given array
 *@size: size of the array
 *@action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
