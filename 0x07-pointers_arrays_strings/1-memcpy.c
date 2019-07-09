#include "holberton.h"
/**
 * _memcpy - entry point
 * @dest: pointer to an arryay
 * @src: pointer to an array
 * @n: number assign randomly
 *
 * Description: copy memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
