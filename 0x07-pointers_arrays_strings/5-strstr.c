#include "holberton.h"
/**
 * _strpbrk - entry point
 * @s: pointer
 * @accept: pointer
 *
 * Description: search a string for any of a set of bytes
 * Return: a pointer s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			return (s + j);
		}
	}
	return ('\0');
}
