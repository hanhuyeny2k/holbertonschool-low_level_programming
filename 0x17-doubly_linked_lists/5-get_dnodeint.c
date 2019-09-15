#include "lists.h"

/**
 * get_dnodeint_at_index - main entry, return the nth node of the linked list
 * @head: pointer to the head of the node
 * @index: given position of index
 *
 * Return: NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int counter;

	ptr = head;
	if (ptr == NULL)
		return (NULL);
	for (counter = 0; counter < index; counter++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
