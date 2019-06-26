#include "holberton.h"
/**
 * print_sign - entry point
 * @n: integer
 *
 * Description: print sign of a number
 * Return: 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
