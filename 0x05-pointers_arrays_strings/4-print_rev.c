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

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * print_rev - entry point
 * @s: parameter of variable
 *
 * Description: print a string in reverse
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
