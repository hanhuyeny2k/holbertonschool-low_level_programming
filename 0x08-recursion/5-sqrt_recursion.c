#include "holberton.h"
/**
 * prototype_root - entry point
 * @x: integer
 * @upper: limitation
 *
 * Description: find the square root
 * Return: square root
 */
int prototype_root(int x, int upper)
{
	if (x * x == upper)
		return (x);
	else if (x <= upper)
		return (prototype_root(x + 1, upper));
	else
		return (-1);
}

/**
 * _sqrt_recursion - entry point
 * @n: integer
 *
 * Description: return the square root of a number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int y = prototype_root(0, n);

	return (y);
}
