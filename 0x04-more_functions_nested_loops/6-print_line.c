#include "holberton.h"
/**
 * print_line - entry point
 * @n: variables for integer
 *
 * Description: draw a straight line
 * Return: 0
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
