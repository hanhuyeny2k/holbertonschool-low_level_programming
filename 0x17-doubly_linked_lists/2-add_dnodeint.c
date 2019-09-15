#include "lists.h"

/**
 * add_dnodeint - main entry, add node at beginning of list
 * @head: pointer to the pointer that point to the node
 * @n: number contains in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
