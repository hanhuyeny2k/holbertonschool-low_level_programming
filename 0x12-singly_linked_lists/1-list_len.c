#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - main entry, use this function to print
 * @h: pointer to the head of the node
 *
 * Return: the counter
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);
	for (; ptr != NULL; ptr = ptr->next)
	{
		counter++;
	}
	return (counter);
}
