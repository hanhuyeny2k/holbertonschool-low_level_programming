#include "holberton.h"
/**
 * cap_string - entry point
i * @s: pointer
 *
 * Description: capitalize all words of the string
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	if ((s[0] >= 97) & (s[0] <= 122))
	{
		s[0] = s[0] - 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == '\t' && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == '\n' && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 44 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 59 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 46 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 33 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 63 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 34 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 40 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 41 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 123 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
		else if (s[i] == 125 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
