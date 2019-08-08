#include "holberton.h"
#include <string.h>

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
	int len = strlen(b);

	if (b == NULL)
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
