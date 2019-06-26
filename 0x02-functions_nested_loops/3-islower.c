#include "holberton.h"
/**
 * _islower - look for lowercase
 * Description: lowercase
 * @c: integer to be test
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
