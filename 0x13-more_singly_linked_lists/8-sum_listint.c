#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - main entry, add all the data (n) together
 * @head: pointer to the head of the node
 *
 * Return: the counter
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
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
