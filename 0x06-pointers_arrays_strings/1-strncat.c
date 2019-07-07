#include "holberton.h"
/**
 * _strncat - entry point
 * @dest: pointing to an array that contains a string
 * @src: pointing to an array that contain a string
 * @n: random number is assigned randomly to this variable
 *
 * Description: concatenates two strings
 * Return: dest to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] && j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
