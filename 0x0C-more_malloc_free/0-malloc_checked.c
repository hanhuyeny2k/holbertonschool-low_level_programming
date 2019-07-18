#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - main entry
 * @b: pointer to a string
 *
 *Description: allocate memory using malloc
 * Return: pointer a
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc (sizeof(char) * b);
	{
		if (a == NULL)
		exit (98);
	}
	return (a);
}
