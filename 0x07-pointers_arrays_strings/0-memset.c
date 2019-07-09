#include "holberton.h"
/**
 * _memset - entry point
 * @s: pointer to an arryay
 * @b: variable to call a function
 * @n: number assign randomly
 *
 * Description: function that fills memory with a constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
