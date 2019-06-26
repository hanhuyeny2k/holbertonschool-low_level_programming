#include "holberton.h"
/**
 * _abs - entry point
 * @n: variables for the absolute value
 *
 * Description: finding absolute value
 * Return: 0
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * -1;
	}
	else
	{
		a = n;
	}
	return (a);
}

