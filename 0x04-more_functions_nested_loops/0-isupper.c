#include "holberton.h"
/**
 * _isupper - entry point
 * @c: upper case integer
 * Description: checks for uppercase character
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
