#include "holberton.h"

/**
 * helper_fx - main entry, print zero
 * @n: decimal number passing through
 *
 */
void helper_fx(unsigned long int n);
void helper_fx(unsigned long int n)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;

	if (n != 0)
	{
		helper_fx(n >> 1);
		a = n >> 1;
		b = a * 2;
		c = n - b;
		if (c != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}

/**
 * print_binary - entry point, print binary numbers
 * @n: decimal numbers passing through
 *
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		helper_fx(n);
}
