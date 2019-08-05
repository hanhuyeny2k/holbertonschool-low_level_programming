#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - entry point, add node at the end of linked list
 * @n: integer within the node
 * @head: double pointer pointing to the first node
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));
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
	return (new);
}
