#include "lists.h"

/**
 * free_dlistint - main entry, free the list
 * @head: pointer to the node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	if (ptr == NULL)
		return;
	for (; head != NULL;)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
