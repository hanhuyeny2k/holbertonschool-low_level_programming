#include "holberton.h"
/**
 * print_last_digit - entry point
 * @n: integer
 * Description: using printf
 * Return: 0
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	r = r * -1;
	_putchar('0' + r);
	return (r);
}
