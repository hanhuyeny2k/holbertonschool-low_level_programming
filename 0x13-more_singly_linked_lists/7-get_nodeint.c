#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - main entry, return the nth node of the linked list
 * @head: pointer to the head of the node
 * @index: given position of index
 *
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
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
