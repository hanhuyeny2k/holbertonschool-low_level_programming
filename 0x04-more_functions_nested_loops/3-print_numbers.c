#include "holberton.h"
/**
 * print_numbers - entry point
 *
 * Description: print the numbers
 * Return: 0
 */
void print_numbers(void)
{
	int a;

		for (a = '0' ; a <= '9'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
}
