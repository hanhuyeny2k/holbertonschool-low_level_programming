#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - main entry, reverse the linked list
 * @head: pointer to the head of the node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *prev;

	prev = NULL;
	curr = *head;
	while (*head != NULL)
	{
		*head = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;
	return (*head);
}
