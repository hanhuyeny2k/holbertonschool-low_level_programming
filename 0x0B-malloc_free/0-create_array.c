#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - main entry
 * @c: value to save in the array
 * @size: how long is the array
 *
 *Description: create an array and initialize it with a specific char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		a[i] = c;
	return (a);
}
