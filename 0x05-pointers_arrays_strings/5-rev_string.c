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
 * rev_string - entry point
 * @s: parameter for variable
 *
 * Description: reverse a string
 */
void rev_string(char *s)
{
	int i;
	int len;
	char c;

	len = _strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
