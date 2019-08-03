#include "lists.h"
/**
 * free_list - main entry, use this function to free the string and the pointer
 * @head: pointer to the node
 *
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	for (; head != NULL;)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
