#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - main entry, free the node and the pointer
 * @head: double pointer to the node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return;
	for (; *head != NULL;)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
