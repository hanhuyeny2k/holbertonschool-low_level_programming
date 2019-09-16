#include "lists.h"

/**
 * delete_dnodeint_at_index - main entry, delete a node at a given position
 * @head: double pointer to the head of the node
 * @index: given position of index where node gets deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *store_next = NULL;
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
	store_next = ptr->next->next;
	ptr->next = store_next;
	free(ptr->next);
	if (store_next != NULL)
		store_next = ptr;
	return (1);
}
