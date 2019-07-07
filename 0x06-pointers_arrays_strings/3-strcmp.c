#include "holberton.h"
/**
 * _strcmp - entry point
 * @s1: pointer
 * @s2: pointer
 *
 * Description: compares two strings
 * Return: the difference or zero if no difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
		else
			return (0);
}
