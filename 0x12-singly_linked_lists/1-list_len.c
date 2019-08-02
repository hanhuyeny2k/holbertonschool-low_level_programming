#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - main entry, use this function to print
 * @h: pointer to the head of the node
 *
 * Return: the counter
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);
	for (; ptr != NULL; ptr = ptr->next)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
			counter++;
	}
	return (counter);
}
