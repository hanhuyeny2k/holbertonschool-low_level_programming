#include "holberton.h"
/**
 * _strchr - entry point
 * @s: pointer to an arryay
 * @c: assigned character
 *
 * Description: locates a character in a string
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
