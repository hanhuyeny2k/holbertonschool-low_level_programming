#include "lists.h"

/**
 * insert_dnodeint_at_index - main entry, insert a new node at a given position
 * @h: double pointer to the head of the node
 * @idx: given position of index where new node be added
 * @n: a given number that passes through the parameter
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *store_next, *new;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);
	ptr = *h;
	if ((h == NULL || *h == NULL) && idx != 0)
		return (NULL);
	if (idx == 0 && (h != NULL || *h != NULL))
	{
		new = malloc(sizeof(dlistint_t));
		{
			if (new == NULL)
			return (NULL);
		}
		if (ptr != NULL)
			ptr->prev = new;
		new->n = n;
		new->next = ptr;
		*h = new;
		return (new);
	}
	if (ptr == NULL)
		return (NULL);
	for (; counter < idx - 1 && ptr != NULL; ptr = ptr->next)
		counter++;
	if (ptr == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	store_next = ptr->next;
	ptr->next = new;
	new->prev = ptr;
	new->next = store_next;
	if (store_next != NULL)
		store_next->prev = new;
	return (new);
}
