#include "holberton.h"
/**
 * print_square - entry point
 * @size: variable integer
 *
 * Description: print a square
 * Return: 0
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
