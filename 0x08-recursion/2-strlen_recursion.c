#include "holberton.h"
/**
 * _strlen_recursion - entry point
 * @s: pointer
 *
 * Description: find the length of a string
 * Return: function that print the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);
}
