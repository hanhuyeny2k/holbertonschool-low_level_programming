#include "holberton.h"
/**
 * _strlen - entry point
 * @s: parameter for strings
 *
 * Description: returns the length of a string
 * Return: a value
 */
int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		i++;
	return (i);
}

