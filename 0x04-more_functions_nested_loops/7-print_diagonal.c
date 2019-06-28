#include "holberton.h"
/**
 * print_diagonal - entry point
 * @n: variables for the integer
 *
 * Description: print diagonal
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				if (b > 0)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
