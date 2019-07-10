#include "holberton.h"
/**
 * _strspn - entry point
 * @s: pointer to an arryay
 * @accept: pointer to an array
 *
 * Description: gets the length of a prefix substring
 * Return: number of bytes in int l
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (0);
}
