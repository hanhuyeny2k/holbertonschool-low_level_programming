#include "lists.h"

/**
 * sum_dlistint - main entry, add all the data (n) together
 * @head: pointer to the head of the node
 *
 * Return: the counter
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int counter = 0;

	ptr = head;
	if (ptr == NULL)
		return (0);
	for (; ptr != NULL; ptr = ptr->next)
	{
		counter += ptr->n;
	}
	return (counter);
}
