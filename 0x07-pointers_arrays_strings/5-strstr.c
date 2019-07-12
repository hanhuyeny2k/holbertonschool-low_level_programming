#include "holberton.h"
/**
 * _strstr - entry point
 * @haystack: pointer
 * @needle: pointer
 *
 * Description: locates a substring
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i] && needle[j] && haystack[i] == needle[j]; i++, j++)
			;
		if (needle[j] == '\0')
			return (haystack + (i - j));
			i = i - j;
	}
	return ('\0');
}
