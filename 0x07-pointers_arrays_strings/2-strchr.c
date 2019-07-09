#include "holberton.h"
/**
 * _strchr - entry point
 * @s: pointer to an array
 * @c: assigned character
 *
 * Description: locates a character in a string
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
	return ('\0');
}
