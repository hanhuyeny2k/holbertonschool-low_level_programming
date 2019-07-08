#include "holberton.h"
/**
 * leet - entry point
 * @s: pointer
 *
 * Description: replacing letters with numbers
 * Return: s
 */
char *leet(char *s)
{
	int i;
	int j;

	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char number[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
				s[i] = number[j];
		}
	}
	return (s);
}
