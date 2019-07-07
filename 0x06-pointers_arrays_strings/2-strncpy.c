#include "holberton.h"
/**
 * _strncpy - entry point
 * @dest: pointer to an arryay
 * @src: pointer to an array
 * @n: number assign randomly
 *
 * Description: copy a string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = 0;
	}
	return (dest);
}
