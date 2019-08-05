#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - main entry, use this function to delete head node
 * @head: double pointer to the head of the node
 *
 * Return: the counter
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int value;

	ptr = *head;
	if (*head == NULL)
		return (0);
	*head = ptr->next;
	value = ptr->n;
	free(ptr);
	return (value);
}
