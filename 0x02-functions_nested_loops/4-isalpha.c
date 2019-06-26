#include "holberton.h"
/**
 * _isalpha - entry point
 * Description: upper and lower case letter
 * Return: 1
 * @c: integer
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
