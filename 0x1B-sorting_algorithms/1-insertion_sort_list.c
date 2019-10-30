#include "sort.h"

/**
 * swap_nodes - swap two given nodes
 * @node1: Pointer to the fist node
 * @node2: Pointer to the second node
 * Return: the first node
 */

listint_t *swap_nodes(listint_t *node1, listint_t *node2)
{
	listint_t *temp;

	temp = node1->next;
	node1->next = node2->next;
	node2->next = temp;

	if (node1->next != NULL)
		node1->next->prev = node1;
	if (node2->next != NULL)
		node2->next->prev = node2;

	temp = node1->prev;
	node1->prev = node2->prev;
	node2->prev = temp;

	if (node1->prev != NULL)
		node1->prev->next = node1;
	if (node2->prev == NULL)
		return (node2);
	node2->prev->next = node2;
	return (node1);
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using Insertion sort.
 *
 * @list: Double pointer to a doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = *list;
	temp = (*list)->next;

	while (temp != NULL)
	{
		while (current != NULL && temp->n < current->n)
		{
			temp = swap_nodes(temp, current);
			current = temp->prev;
			if (current == NULL)
				*list = temp;
			print_list(*list);
		}
		current = temp;
		temp = temp->next;
	}
}
