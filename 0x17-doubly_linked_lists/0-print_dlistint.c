#include "lists.h"

/**
 * print_dlistint - main entry, print all the elements from the list
 * @h: pointer to the head of the node
 *
 * Return: the counter
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%u\n", h->n);
		counter++;
	}
	return (counter);
}
