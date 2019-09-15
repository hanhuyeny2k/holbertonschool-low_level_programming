#include "lists.h"

/**
 * add_dnodeint_end - entry point, add node at the end of linked list
 * @n: integer within the node
 * @head: double pointer pointing to the first node
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	ptr = *head;
	if (ptr == NULL)
	{
		*head = new;
		return (new);
	}
	for (; ptr->next != NULL; ptr = ptr->next)
		;
	ptr->next = new;
	new->prev = ptr;
	new->next = NULL;
	return (new);
}
