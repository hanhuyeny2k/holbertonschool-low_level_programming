#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - main entry
 * @nmemb: number of elements
 * @size: bytes size
 *
 *Description: allocate memory for calloc using malloc
 * Return: pointer a
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (a);
}
