#include "holberton.h"
/**
 * string_toupper - entry point
 * @s: pointer
 *
 * Description: change all lowercase letters of a string to uppercase
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97) & (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
