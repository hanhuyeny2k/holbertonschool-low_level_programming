#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - main entry
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 *Description: concatenates two strings
 * Return: pointer s3
 */
char *str_concat(char *s1, char *s2)
{
	int strlen = 0;
	int i;
	int j;
	char *s3 = NULL;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		strlen++;
	for (i = 0; s2[i] != '\0'; i++)
		strlen++;
	s3 = malloc(sizeof(char) * (strlen + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
