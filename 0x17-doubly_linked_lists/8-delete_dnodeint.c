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
	dlistint_t *store_next;
	dlistint_t *store_prev;
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
	free(ptr->next);
	ptr->next = store_next;
	store_prev = ptr->prev;
	if (store_next != NULL)
		store_prev = ptr;
	store_next->prev = store_prev;
	store_prev->next = store_next;
	return (1);
}
