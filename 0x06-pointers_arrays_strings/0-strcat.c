#include "holberton.h"
/**
 * _strcat - entry point
 * @i: declaring a variable
 * @j: declaring a variable
 *
 * Description: concatenates two strings
 * Return: the result of string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
