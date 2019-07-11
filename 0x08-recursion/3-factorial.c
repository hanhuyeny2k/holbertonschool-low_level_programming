#include "holberton.h"
/**
 * factorial - entry point
 * @n: variable for a random number
 *
 * Description: find the factorial of given number
 * Return: -1 when indicate an error
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
