#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - main entry, print the length of linked list
 * @h: pointer to the head of the node
 *
 * Return: the counter
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);
	for (; ptr != NULL; ptr = ptr->next)
		counter++;
	return (counter);
}

