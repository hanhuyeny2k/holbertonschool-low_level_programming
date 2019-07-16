#include "holberton.h"
#include <stdlib.h>
/**
 * m - stores 3 int in a new allocated space in memory and prints the sum
 * @n0: integer to store and print
 * @n1: integer to store and print
 * @n2: integer to store and print
 *
 *Description: create an array and initialize it with a specific char
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);
	for (i = 0; i <= size; i++)
		a[i] = c;
	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	return (a);
}
