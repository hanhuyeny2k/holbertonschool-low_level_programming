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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return (s + i);
		}
	}
	return ('\0');
}
