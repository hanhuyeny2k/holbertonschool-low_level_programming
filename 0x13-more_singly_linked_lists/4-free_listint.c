#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - main entry, free the node
 * @head: pointer to the node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

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
