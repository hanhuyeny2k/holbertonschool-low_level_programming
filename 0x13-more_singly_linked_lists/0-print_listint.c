#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - main entry, use this function to print the integer
 * @h: pointer to the head of the node
 *
 * Return: the counter
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	ptr = h;
	if (h == NULL)
		return (0);
	for (; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		counter++;
	}
	return (counter);
}
