#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - entry point, print the length of the string
 * @s: parameter for strings
 *
 * Description: returns the length of a string
 * Return: a value
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - main entry, use this function to print
 * @head: pointer to the pointer that point to the node
 * @str: string that passes through the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
