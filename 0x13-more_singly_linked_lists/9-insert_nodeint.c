#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - main entry, add a node at the beginning of linked list
 * @head: pointer to the head of the node
 * @n: integer contains inside the node
 *
 * Return: the counter
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * insert_nodeint_at_index - main entry, insert a new node at a given position
 * @head: double pointer to the head of the node
 * @idx: given position of index where new node be added
 * @n: a given number that passes through the parameter
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int counter = 0;
	listint_t *new;

	ptr = *head;
	if ((head == NULL || *head == NULL) && idx != 0)
		return (NULL);
	if ((head == NULL || *head == NULL) && idx == 0)
	{
		new = add_nodeint(head, n);
			return (new);
	}
	if (idx == 0 && (head != NULL || *head != NULL))
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = ptr;
		*head = new;
		return (new);
	}
	if (ptr == NULL)
		return (NULL);
	for (; counter < idx - 1 && ptr != NULL; ptr = ptr->next)
		counter++;
	if (ptr == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
