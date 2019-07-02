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
 * puts_half - entry point
 * @str: parameter of variable
 *
 * Description: print even number
 */
void puts_half(char *str)
{
	int i;
	int n;
	int length;

	length = _strlen(str);
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;
	for (i = length - n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
