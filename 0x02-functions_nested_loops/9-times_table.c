#include "holberton.h"
/**
 * times_table - entry point
 * Description: counting hours
 * Return: 0
 */
void times_table(void)
{
	int x;
	int y;
	int result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;
			if (result / 10 == 0)
			{
				if (y != 0)
					_putchar(' ');
					_putchar(result % 10 + '0');
			}
			else if (result / 10 == 0 && result % 10 != 0)
			{
				_putchar(' ');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

