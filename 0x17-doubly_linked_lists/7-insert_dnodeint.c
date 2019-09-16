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
	dlistint_t *ptr;
	dlistint_t *store_next;
	unsigned int counter = 0;
	dlistint_t *new;

	if (h == NULL)
		return (NULL);
	ptr = *h;
	if ((h == NULL || *h == NULL) && idx != 0)
		return (NULL);
	if (idx == 0 && (h != NULL || *h != NULL))
	{
		new = malloc(sizeof(dlistint_t));
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
	printf("testing 1");
	new->n = n;
	store_next = ptr->next;
	printf("testing 2");
	ptr->next = new;
	new->prev = ptr;
	printf("testing 3");
	new->next = store_next;
	store_next->prev = new;
	printf("testing 4");
	return (new);
}
