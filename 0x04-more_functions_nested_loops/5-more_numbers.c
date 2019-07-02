#include "holberton.h"
/**
 * more_numbers - entry point
 *
 * Description: print 10 times the numbers
 * Return: 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar('0' + b / 10);
			}
		_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
