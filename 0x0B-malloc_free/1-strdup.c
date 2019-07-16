#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - main entry
 * @str: pointer to a string
 *
 *Description: return a pointer to a newly allocated space in memory
 * Return: pointer a
 */
char *_strdup(char *str)
{
	int i;
	int j;
	int strlen = 0;
	char *a;

	for (j = 0; str[j] != '\0'; j++)
		strlen++;
	a = malloc(sizeof(char) * strlen);
	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
	if (str == NULL)
		return (NULL);
	if (a == NULL)
		return (NULL);
	return (a);
}


