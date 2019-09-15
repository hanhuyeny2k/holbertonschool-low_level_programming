#include "lists.h"

/**
 * dlistint_len - main entry, return the number of the elements from the list
 * @h: pointer to the head of the node
 *
 * Return: the counter
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);
	for (; ptr != NULL; ptr = ptr->next)
		counter++;
	return (counter);
}
