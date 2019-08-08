#include "holberton.h"

/**
 * _strlen - entry point
 * @s: parameter for strings
 *
 * Description: returns the length of a string
 * Return: a value
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * binary_to_uint - main entry, convert binary to decimal
 * @b: pointer to a string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int base = 1;
	unsigned int total = 0;
	int len = _strlen(b);

	if (b == NULL)
		return (0);
	if (len == 0)
		return (0);
	for (i = len; i > 0; i--)
	{
		if (b[i - 1] == '1' || b[i - 1] == '0')
		{
			if (b[i - 1] == '1')
			total += base;
		}
		else
			return (0);
		base = base * 2;
	}
	return (total);
}
