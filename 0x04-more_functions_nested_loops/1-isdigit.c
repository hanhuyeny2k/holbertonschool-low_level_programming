#include "holberton.h"
/**
 * _isdigit - entry point
 * @c: variables for a digit
 *
 * Description: check for a digit
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
