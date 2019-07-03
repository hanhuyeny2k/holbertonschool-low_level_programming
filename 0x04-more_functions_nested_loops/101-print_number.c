#include "holberton.h"
/**
 * print_number - entry point
 * @n: variable integer
 *
 * Description: printing big numbers
 */
void print_number(int n)
{
	if (n > 9)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
		n = n * (-1);
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n + '0');
}
