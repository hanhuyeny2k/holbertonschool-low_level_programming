#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - main entry, delete a node at a given position
 * @head: double pointer to the head of the node
 * @index: given position of index where node gets deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *next;
	unsigned int i;

	ptr = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	for (i = 0; ptr != NULL && i < index - 1; i++)
		ptr = ptr->next;
	if (ptr == NULL || ptr->next == NULL)
		return (-1);
	next = ptr->next->next;
	free(ptr->next);
	ptr->next = next;
	return (1);
}
