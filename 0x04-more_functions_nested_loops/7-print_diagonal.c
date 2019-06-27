#include "holberton.h"
/**
 * print_diagonal - entry point
 * @n: variables for the integer
 *
 * Description: finding absolute value
 * Return: 0
 */
void print_diagonal(int n)
{
	for (; n > 0; n--)
	{
		if (n > 0)
		{
			_putchar(' ');
		}
	}
	_putchar('\\');
	_putchar('\n');
}
