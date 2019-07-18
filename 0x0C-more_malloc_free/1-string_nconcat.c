#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - main entry
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: given value
 *
 *Description: concatenates two strings
 * Return: pointer a
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int sum = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		sum = (i + n);
	a = malloc(sizeof(char) * (sum + 1));
		if (a == NULL)
			return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		a[i] = s2[j];
		a[i] = '\0';
	return (a);
}
