#include "lists.h"

/**
 * print_dlistint - main entry, print all the elements from the list
 * @h: pointer to the head of the node
 *
 * Return: the counter
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);
	for (; ptr != NULL; ptr = ptr->next)
	{
		printf("%u\n", ptr->n);
		counter++;
	}
	return (counter);
}
